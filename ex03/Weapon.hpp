/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:56:30 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 11:05:52 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
    private: 
        std::string type;
    public:
        Weapon(const std::string &type);
        ~Weapon();
        const std::string &getType() const;
        void setType(std::string str);
};

#endif