/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:47:54 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 11:06:21 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(const std::string &name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack() const;
};