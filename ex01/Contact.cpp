/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:07:19 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/21 17:19:35 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

contact::contact()
{
    contact::name = NULL;
    contact::last_name = NULL;
    contact::nickname = NULL;
    contact::number = NULL;
    contact::darkest_secret = NULL;
}
contact::contact(char info[5][1024])
{
    contact::name = info[0];
    contact::last_name = info[1];
    contact::nickname = info[2];
    contact::number = info[3];
    contact::darkest_secret = info[4];
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