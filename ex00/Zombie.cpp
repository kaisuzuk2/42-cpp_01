/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:03:24 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 08:05:46 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name){}

Zombie::~Zombie() {
    std::cout << this->name << " is destroyed. " << std::endl;
}

void Zombie::announce() const {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}