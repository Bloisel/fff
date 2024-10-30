/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 07:02:12 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/30 10:43:59 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

std::string newStr(std::string ret, char **argv)
{
    std::string strToReplace = argv[2];  
    std::string replacementStr = argv[3]; 
    std::string newRet;                   
    
    size_t pos = 0; 
    size_t strLength = strToReplace.length(); 
    while ((pos = ret.find(strToReplace, pos)) != std::string::npos) 
    {
        newRet += ret.substr(0, pos); 
        newRet += replacementStr;      
        pos += strLength;              
        ret = ret.substr(pos);        
        pos = 0;                       
    }
    newRet += ret; 
    return newRet; 
}

void newFile(std::string str, char **argv)
{
    std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
    if (!outputFile.is_open()) 
    {
        std::cout << "Error opening output file." << std::endl;
        return ;
    }
    outputFile << str; 
    outputFile.close();
    std::cout << "Modified content written to " << argv[1] << ".copy" << std::endl;
}

int main(int argc, char **argv) 
{
    if (argc != 4) 
    {
        std::cout << "Usage: ./program <input_file> <string_to_replace> <replacement_string>" << std::endl;
        return -1;
    }
    std::ifstream inputFile(argv[1]);
    std::string ret;
    std::string line;
    std::string str;
    if (!inputFile.is_open()) 
    {
        std::cout << "Error opening input file." << std::endl;
        return -1;
    }
    while (std::getline(inputFile, line)) 
        ret += line + '\n';  
    inputFile.close();
    
    str = newStr(ret , argv);
    newFile(str, argv);

    return 0;
}
