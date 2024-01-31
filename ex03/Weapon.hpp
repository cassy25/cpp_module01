/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:17:54 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 14:17:55 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType() const;
        void setType(std::string const type);
    private:
        std::string _type;
};

#endif