/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <cgeoffra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:27 by cgeoffra          #+#    #+#             */
/*   Updated: 2024/01/31 16:59:25 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>


void newStr(std::string source, std::string s1, std::string s2)
{
    std::ifstream Source(source.c_str()); //Permet d'ouvrir le fichier
    if (!Source.is_open())
    {
        std::cout << "Error: <File>.txt does not exist." << std::endl;
        return ;
    }

    size_t newFilePos = source.find_last_of('.');
    std::string newFile = source.substr(0, newFilePos);
    newFile = newFile = newFile.append(".replace"); 
    std::ofstream Destination(newFile.c_str()); //Cree un nouveau fichier pour accueillir la nouvelle chaine
    if (!Destination.is_open())
    {
        std::cout << "Error: <File>.replace impossible to open." << std::endl;
        return ;
    }
    std::string line;
    while (getline(Source, line)) //Recupere chaque ligne
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) //Recherche une occurence, renvois npos si pas trouve
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length()); //Remplace la chaine
            pos += s2.length(); //Modifie pos pour qu'il soit a la fin de la nouvelle chaine
        }
        Destination << line << std::endl; //Ecrit la ligne dans le nouveau fichier
    }
    Source.close(); //Permet de fermer le fichier
    Destination.close();
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string Source = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        char test = '\n';
        size_t found = s1.find(test);
        if (found != std::string::npos)
        {
            std::cout << "Error: s1 contains a newline." << std::endl;
            return (0);
        }
        else
            newStr(Source, s1, s2);
    }
    else
        std::cout << "Error: Too many or not enough arguments." << std::endl;
    return (0);
}
