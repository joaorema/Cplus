#include "Data.hpp"


Data::Data(const char *database)
{
    getData(database);  //creates database from data.csv
}

Data::~Data()
{
}

void Data::getData(const char *file)
{
    std::ifstream new_file(file);                                                           //used to manage files
    if(!new_file.is_open())
    {
        std::cerr << "Failed to open file" << std::endl;
        return;
    }
    std::string line;                                                                       //current line in our file
    std::getline(new_file, line);                                                           //skip header line
    
    while(std::getline(new_file, line))                                                     //while there is new lines in our file
    {
        if(line.empty())
            continue;
        std::stringstream current_line(line);
        std::string date;
        std::string rate;
        if(std::getline(current_line, date, ',') && std::getline(current_line, rate))
        {
            double rating = std::strtod(rate.c_str(), NULL);
            this->_data.insert(std::make_pair(date, rating));

        }
    }
}

void Data::checkData(const char *file)
{
    std::ifstream new_file(file);
    if(!new_file.is_open())
    {
        std::cerr << "Failed to open file" << std::endl;
        return;
    }
    std::string line;
    std::getline(new_file, line);   //skip header

    while(std::getline(new_file, line))
    {
        if(line.empty())
            continue;
        std::stringstream current(line);
        std::string date;
        std::string value;
        if(!std::getline(current, date, '|') || !std::getline(current, value))   //split the line into date - value
        {
            std::cerr << "Error: bad input => " << line <<  std::endl;
            continue;
        }
        trim(date);     //trim date 
        trim(value);    //trim value
        if(!validDate(date))
        {
            std::cerr << "Error: invalid date => " << line <<  std::endl;
            continue;
        }
        char *end;
        double c_value = std::strtod(value.c_str(), &end);
        if(*end != '\0')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if(c_value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if(c_value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        getRateDate(date, c_value);
         
    }

}

void Data::getRateDate(const std::string &date, double value)
{
    std::map<std::string, double>::iterator it = _data.lower_bound(date);    //iterator at the closest date
    if(it->first != date)
    {
        it--;
    }
    double rate = it->second;
    double result = value * rate;
    std::cout << date << " => " << value << " = " << result << std::endl;
}

void Data::trim(std::string &string)
{
    while(!string.empty() && std::isspace(string[0]))
    {
        string.erase(0, 1);
    }
    while(!string.empty() && std::isspace(string[string.size() - 1]))
    {
        string.erase(string.size() - 1);
    }
}

bool Data::validDate(const std::string &date)
{
    if(date.size() != 10)                   //if it does not have 10 digits its not valid 2020-10-05 = 10
        return false;
    if(date[4] != '-' && date[7] != '-')    //if not true not valid 
        return false;

    std::string year = date.substr(0, 4);   //2020
    std::string month = date.substr(5, 2);  //10
    std::string day = date.substr(8, 2);    //05

    for(int i = 0; i < 4; ++i)
    {
        if(!std::isdigit(year[i]))          //if we have anything different that a digit
            return false;
    }
    for(int i = 0; i < 2; ++i)
    {
        if(!std::isdigit(month[i]) || !std::isdigit(day[i]))
            return false;
    }

    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());

    if(m < 1 || m > 12 || d < 1 || d > 31)      //check month and day 
        return false;

    return true;
}