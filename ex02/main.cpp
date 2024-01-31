/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:16:17 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/23 12:16:18 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    //Initialisation des variables
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    //Afficher les adresses memoires
    std::cout << "The adress of the string is : " << &str << std::endl;
    std::cout << "The adress of the string pointer by the pointer is : " << ptr << std::endl;
    std::cout << "The adress of the reference is : " << &ref << std::endl;
    std::cout << std::endl;
    //Afficher les valeurs des variables
    std::cout << "The value of the string is : " << str << std::endl;
    std::cout << "The value of the string pointer by the pointer is : " << *ptr << std::endl;
    std::cout << "The value of the reference is : " << ref << std::endl;
    return 0;
}
