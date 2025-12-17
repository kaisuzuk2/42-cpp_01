/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 01:33:28 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 10:56:47 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon): name(name), weapon(weapon){}

HumanA::~HumanA() {}

void HumanA::attack() const {
    std::cout << this->name << ": " 
    << "attack by " << this->weapon.getType() << std::endl;
}

