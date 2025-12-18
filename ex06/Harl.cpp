/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 09:35:08 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/18 10:56:21 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years, whereas you started working here just last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::printDefault() {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string &level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    const size_t size = sizeof(levels) / sizeof(levels[0]);
    int idx = -1;
    Harl harl;

    for (size_t i = 0; i < size; i++) {
        if (levels[i] == level)
        {
            idx = i;
            break;
        }
    }
    switch(idx) {
        case 0:
            harl.debug();
            break;
        case 1:
            harl.info();
            break;
        case 2:
            harl.warning();
            break;
        case 3:
            harl.error();
            break;
        default:
            harl.printDefault();
    }
}