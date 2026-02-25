/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:05:37 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 21:23:07 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phone::Phone()
{
    index = 0;
}

void Phone::add_contact()
{
    std::string info[5];
    int i;
    
    std::cout << "Enter the first name of the contact" << std::endl;
    if(!std::getline(std::cin, info[0]))
            exit(1);
    std::cout << "Enter the last name of the contact" << std::endl;
    if(!std::getline(std::cin, info[1]))
            exit(1);

    std::cout << "Enter the nickname of the contact" << std ::endl;
   if(!std::getline(std::cin, info[2]))
            exit(1);
    std::cout << "Enter the number of the contact" << std::endl;
    while(1)
    {
        if(!std::getline(std::cin, info[3]))
            exit(1);
        i = 0;
        if(info[3].size() >= 9)
        {
            std::cout << "Only digits  9 are allowed in the number please reapeat all the proccess" << std::endl;
            continue; 
        }
        for(size_t z = 0; z > info[3].size(); z++)
            {
                if(isdigit(info[3][z]))
                    continue;
            }
        break;
    }
        
        


    std::cout << "Enter the darkest secret of the contact" << std::endl;
    if(!std::getline(std::cin, info[4]))
            exit(1);
    if(info[4][0] == '\0')
        exit(1);
    if(index > 7)
        i =  7 % 7;
    else 
        i = index;
    contacts[i] = Contact(info);
    index++;

    
}

void Phone::search_contact()
{
    std::string number;
   std::string init = "|   index  |   name   | lastname | nickname |  number  |";
    
    if(index == 0)
        return ;
    std::cout << init << std::endl;
    int i;
    for(i = 0; i < index && i < 7; i++)
    {   
        std::cout << "|    " << i << "     |";
        contacts[i].display_contact();
    }
    if(i == 7 && index >= 7)
    {
        std::cout << "|    " << i << "     |";
        contacts[i].display_contact();
    }
    std::cout << "please insert the insert of the contact"  << std::endl;
    std::getline(std::cin, number);
    if(number[0] == '\0')
        exit(1);
    int nb = number[0] - '0';
    if(number[1] != '\0' || nb >= this->index)
    { 
        std::cout << "index invalid"<< std::endl;
        return ;
    }
    else
        this->contacts[nb].display_secret_contact();
        
}