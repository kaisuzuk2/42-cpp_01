/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:21:25 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/18 09:07:47 by kaisuzuk         ###   ########.fr       */
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

bool readFile(const std::string &filename, std::string &fileText) {
    std::ifstream file(filename);
    if (!file)
    {
        printFileError(filename);
        return (false);
    }
    fileText.assign(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
    return (true);
}

std::string replaceAll(const std::string &src, const std::string &s1, const std::string &s2) {
    std::string result;
    std::string::size_type pos;
    std::string::size_type found;

    pos = 0;
    while ((found = src.find(s1, pos)) != std::string::npos)
    {
        result.append(src, pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result.append(src, pos, std::string::npos);
    return (result);
}

bool writeFile(const std::string &filename, const std::string &data) {
    std::string outName;

    outName = filename + ".replace";
    std::ofstream ofs(outName.c_str());
    if (!ofs)
    {
        printFileError(outName);
        return (false);
    }
    ofs << data;
    return (true);
}

int main(int argc, char *argv[]) {
    std::string fileText;
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
    if (!readFile(filename, fileText))
        return (2);
    if (!writeFile(filename, replaceAll(fileText, s1, s2)))
        return (2);
    return (0);
}