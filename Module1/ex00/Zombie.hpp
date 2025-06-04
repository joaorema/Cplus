/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:15:33 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/04 18:07:02 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie
{
    private :
        std::string _name;
        
    public :
        Zombie(void);                                        //constructor       
        ~Zombie(void);                                       //destructor 
        Zombie(std::string name);               
        void announce();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif