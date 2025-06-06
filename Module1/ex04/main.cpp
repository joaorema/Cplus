/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:27:44 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 13:09:58 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <string>
#include <iostream>


int main(int ac, char *av[])
{
    if(ac != 4)
    {
        std::cerr << "Program only works with <filename> <s1> <s2>" << std::endl;
        return 1;    
    }
    File file;
    
    file.setFilename(av[1]);
    file.setS1(av[2]);
    file.setS2(av[3]);

    file.changeFile();
    return 0;
}
