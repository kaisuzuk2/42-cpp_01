/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:47:38 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 11:06:13 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name): name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    std::cout << this->name << ": " 
    << "attack by " << this->weapon->getType() << std::endl;
}