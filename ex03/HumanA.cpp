/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:32:15 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 14:32:16 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &Weapon) : _name(name), _type(Weapon)
{
    return;
}


HumanA::~HumanA()
{
    return;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}