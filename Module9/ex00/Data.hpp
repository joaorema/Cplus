#pragma once
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstddef>
#include <cstdlib>
#include <iterator>


class Data
{
    private:
        std::map<std::string, double> _data;

    public:
        Data(const char *database);
        ~Data();
        
        void getData(const char *file);   //used to make new database from file
        void checkData(const char *file);
        void getRateDate(const std::string &date, double value);
        void trim(std::string &string);
        bool validDate(const std::string &date);


};