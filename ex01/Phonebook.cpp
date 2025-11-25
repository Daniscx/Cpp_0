/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:05:37 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/25 19:20:16 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phone::Phone()
{
    index = 0;
}
static void contact_remove(contact contacts[8])
{
    for(size_t i = 0; i < 7; i++)
          contacts[i] = contacts[i + 1]; 
}
void Phone::add_contact()
{
    char info[5][1024];
    int i;
    if(index == 8)
        contact_remove(Phone::contacts);
    std::cout << "Enter the first name of the contact" << std::endl;
    std::cin >> info[0];
    std::cout << "Enter the last name of the contact" << std::endl;
    std::cin >> info[1];
    std::cout << "Enter the nickname of the contact" << std ::endl;
    std::cin >> info[2];
    std::cout << "Enter the number of the contact" << std::endl;
    std::cin >> info[3];
    i = 0;
    for(; info[3][i]; i++)
    {
       if(!isdigit(info[3][i]))
        {
            std::cout << "Only digits are allowed in the number please reapeat all the proccess" << std::endl;
            return ;
        }
    }
    if(i >= 9)
    {
        std::cout << "Only digits  9 are allowed in the number please reapeat all the proccess" << std::endl;
        return ;
    }
    std::cout << "Enter the darkest secret of the contact" << std::endl;
    std::cin >> info[4];
    contacts[index] = contact(info);
    if (index < 7)
        index++;
    
}
void Phone::search_contact()
{
   const char *init = "|   index  |   name   | lastname | nickname |  number  |";
    
    if(index == 0)
        return ;
    std::cout << init << std::endl;
    int i;
    for(i = 0; i <= index; i++)
    {   
        std::cout << "|    " << i << "     |";
        contacts[i].display_contact();
    }          
}