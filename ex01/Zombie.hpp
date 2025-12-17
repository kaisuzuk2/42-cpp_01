/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-16 23:33:48 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-16 23:33:48 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(const std::string name);
        void announce() const;
};

Zombie *zombieHorde(int n, std::string name);

#endif