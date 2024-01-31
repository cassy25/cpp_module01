/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:32:20 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 14:32:21 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "HumanB.hpp"
# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string const &name, Weapon &Weapon);
        ~HumanA();
        void attack();
    private:
        std::string _name;
        Weapon &_type;
};

#endif
