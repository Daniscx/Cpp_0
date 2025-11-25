/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:07:19 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/25 18:15:49 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

contact::contact()
{
    contact::name[0] = '\0';
    contact::last_name[0] = '\0';
    contact::nickname[0] = '\0';
    contact::number[0] = '\0';
    contact::darkest_secret[0] = '\0';
}
contact::contact(char info[5][1024])
{
    strcpy(contact::name,info[0]);
    std::cout << info[0] << std::endl;
    strcpy(contact::last_name,info[1]);
     strcpy(contact::nickname, info[2]);
    strcpy(contact::number,info[3]);
    strcpy(contact::darkest_secret, info[4]);
}
static void print_simetric_char(size_t size, char *str)
{
    size_t i;
    
    if(size > 10)
    {
        for( i = 0; i <= 9; i++)
            std::cout << str[i];
        std::cout << ".";       
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
void contact::display_contact()
{
    size_t size;
    size = strlen(contact::name);
    print_simetric_char(size, contact::name);
    size = strlen(contact::last_name);
    print_simetric_char(size, contact::last_name);
    size = strlen(contact::nickname);
    print_simetric_char(size, contact::nickname);
    size = strlen(contact::number);
    print_simetric_char(size, contact::number);
    std::cout << std::endl;
 
}