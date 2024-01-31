/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:56:05 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/22 17:56:07 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
    public:

        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        
    private:

        std::string _name;
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif