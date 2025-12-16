/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:00:35 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 08:10:28 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZONBIE_H

#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce() const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif