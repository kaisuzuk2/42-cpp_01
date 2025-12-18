/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 09:52:33 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/18 10:31:15 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void printUsage() {
    std::cout << "Mode : [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
    std::cout << "Usage: ./harl <Mode>" << std::endl;
}

int main(int argc, char *argv[]) {
    Harl harl;
    std::string arg;
    
    if (argc != 2)
    {
        printUsage();
        return (0);
    }
    arg = argv[1];
    harl.complain(arg);
}