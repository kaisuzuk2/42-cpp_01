/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 09:31:43 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/18 10:42:54 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>

class Harl {
    private:   
        void debug();
        void info();
        void warning();
        void error();
        void printDefault();
    public: 
        Harl();
        ~Harl();
        void complain(const std::string &level);
};

#endif