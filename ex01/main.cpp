/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:28:46 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/25 19:19:29 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Phonebook.hpp"
int main()
{
    Phone phone_used;
    char str_input[1024];
    phone_used = Phone();

   while(1)
   {
        std::cin >> str_input;
        if(strcmp(str_input,"ADD") == 0)
            phone_used.add_contact();
        else if(strcmp(str_input, "SEARCH") == 0)
            phone_used.search_contact();
        else if(strcmp(str_input, "EXIT") == 0)
            break;
        else if(str_input[0] == '\0')
            break;
        else
            std::cout << "WRONG COMAND" <<  std::endl;
   }

}