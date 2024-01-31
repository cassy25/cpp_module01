/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:18:27 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/28 12:18:28 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
    {
        std::string level;
        level = argv[1];
        harl.complain(level);
    }
    else
        std::cout << "Too many or not enough arguments" << std::endl;
    return 0;
}
