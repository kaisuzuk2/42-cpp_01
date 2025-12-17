/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-16 23:56:16 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-16 23:56:16 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    int n;
    Zombie *horde;

    n = 5;
    horde = zombieHorde(n, "Foo");
    if (!horde)
        return (1);
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
}