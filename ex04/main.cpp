/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:21:25 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/17 13:25:58 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

void printUsage() {
    std::cout << "USAGE: <filename> <str1> <str2>" << std::endl;
}

void printValid() {
    std::cout << "<str1> must not empty. " << std::endl;
}

void printFileError(const std::string &filename) {
    std::cout << filename << " cannot open. " << std::endl;
}

bool readAll(const std::string &filename, std::string &out) {
    std::ifstream file(filename);
    if (!file)
    {
        printFileError(filename);
        return (false);
    }
    out.assign(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
    return (true);
}

void replaceAll()

int main(int argc, char *argv[]) {
    std::string out;
    std::string filename;
    std::string s1;
    std::string s2;
    
    if (argc != 4)
    {
        printUsage();
        return (0);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
    {
        printValid();
        return (0);
    }


}