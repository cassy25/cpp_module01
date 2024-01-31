/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:34:36 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 14:34:37 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    return;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << this->_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
    _type = &type;
}