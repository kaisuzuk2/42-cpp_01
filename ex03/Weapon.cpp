/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:59:46 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 11:05:48 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): type(type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const {
    return (this->type);
}

void Weapon::setType(std::string str) {
    this->type = str;
}