/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:25:15 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/27 13:25:18 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

void Harl::complain(std::string level)
{
    void (Harl::*levelHarl[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4];
    int i = 0;
    levelHarl[0] = &Harl::debug;
    levelHarl[1] = &Harl::info;
    levelHarl[2] = &Harl::warning;
    levelHarl[3] = &Harl::error;
    str[0] = "DEBUG";
    str[1] = "INFO";
    str[2] = "WARNING";
    str[3] = "ERROR";
    while (i < 4)
    {
        if (level == str[i])
        {
            (this->*levelHarl[i])();
            break;
        }
        i++;
    }
}

void Harl::debug(void)
{
    std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR : This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl()
{
    return ;
}
