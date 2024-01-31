/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:13:01 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/22 19:13:03 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    int nbZombies = 5;
    std::string names;
    if (argc == 2)
    {
        names = argv[1];
        std::cout << "Une horde de zombies debarquent ! Fuiez !" << std::endl;
        Zombie *horde = zombieHorde(nbZombies, names);
        delete[] horde;
    }
    else
        std::cout << "Il n'y a aucun zombie ! (Entrez un nom de horde)" << std::endl;
    return (0);
}
