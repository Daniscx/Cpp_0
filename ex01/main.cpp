/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:28:46 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 21:18:19 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Phonebook.hpp"
int main()
{
    Phone phone_used;
    std::string str_input;
    phone_used = Phone();

   while(1)
   {
        std::cout << "Please put a command" << std::endl;
        if(!std::getline(std::cin, str_input))
            exit(1);
        if(str_input == "ADD") 
            phone_used.add_contact();
        else if(str_input == "SEARCH")
            phone_used.search_contact();
        else if(str_input ==  "EXIT")
            break;
        else
            std::cout << "WRONG COMAND" <<  std::endl;
   }

}