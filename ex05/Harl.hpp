/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:25:21 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/27 13:25:23 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>


class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
        
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};

#endif