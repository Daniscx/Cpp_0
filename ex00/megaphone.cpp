/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:25:17 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 20:28:19 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "iostream"
#include <cctype>

int main(int args, char **shy)
{ 
    int j;
    std::string mesage;

    if(args == 1)
    { 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for (j = 1; shy[j]; j++)
    {
        mesage = shy[j];
        for (size_t i = 0; i < mesage.size(); i++)
             mesage[i] =   toupper(mesage[i]);
        std::cout << mesage;
    }
  
    std::cout  << std::endl;
   return(0); 
           
}
