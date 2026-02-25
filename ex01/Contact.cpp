/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:07:19 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 21:24:27 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact()
{
    Contact::name = '\0';
    Contact::last_name = '\0';
    Contact::nickname = '\0';
    Contact::number = '\0';
    Contact::darkest_secret = '\0';
}
Contact::Contact(std::string info[5])
{
    name = info[0];
    last_name = info[1];
    nickname = info[2];
    number = info[3];
    darkest_secret = info[4];
}
static void print_simetric_char(size_t size, std::string str)
{
    size_t i;
    std::string aux;
    std::string l;
    
 
    if(size > 10)
    {
           l = '.';
        aux = str;
        aux.insert(9, l);
        std::cout << aux; 
    }      
    else
    {
        size_t space_requiered;
        if(size % 2 != 0)
            std::cout << " ";
        space_requiered  = (10 - size) / 2;
        for (i = 0; i != space_requiered; i++)
            std::cout << " ";
        for(i = 0; i < size ; i++)
            std::cout << str[i];
        for (i = 0; i != space_requiered; i++)
            std::cout << " ";
          
    }
    std::cout << "|";
    
}
void Contact::display_contact()
{
    size_t size;
    size = name.size();
    print_simetric_char(size, this->name);
    size = last_name.size();
    print_simetric_char(size, this->last_name);
    size = nickname.size();
    print_simetric_char(size, this->nickname);
    size = number.size();
    print_simetric_char(size, this->number);
    std::cout << std::endl;
 
}
void Contact::display_secret_contact()
{
    std::cout << "Name: "<< this->name << std::endl;
     std::cout << "Lastname: "<< this->name << std::endl;
     std::cout << "Nickname: "<< this->nickname << std::endl;
     std::cout << "Number: "<< this->number << std::endl;
     std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
    
}