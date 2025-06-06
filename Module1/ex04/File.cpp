/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:27:39 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 13:19:48 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

//constuctor & destructors

File::File(void)
{
    
}

File::~File(void)
{
    
}

//getters & setters

void File::setFilename(std::string filename)
{
    _filename = filename;
}

void File::setS1(std::string s1)
{
    _s1 = s1;
}

void File::setS2(std::string s2)
{
    _s2 = s2;
}

//fuctions

void File::changeFile()                                 //fuction to open file / create new file and replace 
{
    std::ifstream inputFile(_filename.c_str());         //open the file that needs to be changed
    if (!inputFile.is_open())                           //if we failed to open file
    {
        std::cerr << "Error. Failed to open file" << _filename << ".replace" << std::endl;
    }
    std::ofstream outputFile((_filename + ".replace").c_str());   //creates the new file
    if (!outputFile.is_open())
    {
        std::cerr << "Error. Failed to create the new file" << _filename << ".replace" << std::endl;
        inputFile.close();
        return ;
    }
    std::string line;                                   //create string to hold the text from file
    while(std::getline(inputFile, line))                //while we read 1 line at the time
    {
        size_t pos = 0;                                 //position that we are on the line being read
        pos = line.find(_s1, pos);                      //looks for s1 in the line
        while(pos != std::string::npos)                 //npos lets us now if find worked or not (!= means we found s1)
        {
            line.erase(pos, _s1.length());               //removes s1 from pos with the len of s1
            line.insert(pos, _s2);                       //Inserts s2 in the same place
            pos = pos + _s2.length();                    //move the pos to after the new text
            
            pos = line.find(_s1, pos);
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
}