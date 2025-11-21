/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:05:37 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/21 17:21:57 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phone::Phone()
{
    index = 0;
}
void Phone::add_contact()
{
    char info[5][1024];
    int i;
    
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
    index++;
    
}
void Phone::search_contact()
{
   const char *init = "   index  |   name   | lastname | nickname |  number  ";
    
    
    std::cout << init << std::endl;
    int i;
    
    for(i = 0; i < index; i++)
    {
        std::cout << "    " << i << "     |";
        contacts[i].display_contact();
    }          
}