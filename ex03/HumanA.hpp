/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 01:06:01 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 10:58:28 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void attack() const;
};

#endif