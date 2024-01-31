/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:17:49 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 14:17:50 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    return;
}

Weapon::Weapon(std::string type)
{
    _type = type;
    return;
}

Weapon::~Weapon()
{
    return;
}

std::string const &Weapon::getType() const
{
    return (this->_type);
}

void Weapon::setType(std::string const type)
{
    _type = type;
    return;
}