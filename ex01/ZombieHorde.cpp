/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-16 23:49:23 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-16 23:49:23 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
    Zombie *res;
    
    if (n <= 0)
        return NULL;
    res = new Zombie[n];
    for (int i = 0; i < n; i++) 
        res[i].setName(name);
    return (res);
}