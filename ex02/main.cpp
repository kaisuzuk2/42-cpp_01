/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-17 00:14:19 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-17 00:14:19 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";

    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << std::left << std::setw(10) << "str" << ":" << &str << std::endl;
    std::cout << std::left << std::setw(10) << "strPTR" << ":" << strPTR << std::endl;
    std::cout << std::left << std::setw(10) << "strREF" << ":" << &strREF << std::endl;

    std::cout << std::left << std::setw(10) << "str" << ":" << str << std::endl;
    std::cout << std::left << std::setw(10) << "strPTR" << ":" << *strPTR << std::endl;
    std::cout << std::left << std::setw(10) << "strREF" << ":" << strREF << std::endl;
}