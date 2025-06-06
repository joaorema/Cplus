/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:27:42 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 13:09:57 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class File
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
    public:
        File(void);
        ~File(void);
        void setFilename(std::string filename);
        void setS1(std::string s1);
        void setS2(std::string s2);
        void changeFile();
};
