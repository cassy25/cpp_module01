/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:54:48 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/22 17:54:51 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie foo("foo"); // Instance de la class Zombie
    Zombie* rodolphe = newZombie("Rodolphe"); // Instance de la class Zombie avec un pointeur pour appeler la fonction newZombie
    
    foo.announce(); // Appel de la fonction announce de la class Zombie
    rodolphe->announce(); // Appel de la fonction announce de la class Zombie depuis un pointeur
    randomChump("Bob"); // Appel de la fonction randomChump qui va créer un Zombie et l'annoncer
    delete rodolphe;
    return (0);
}
