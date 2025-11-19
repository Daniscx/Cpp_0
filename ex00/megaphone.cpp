/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:25:17 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/19 19:52:35 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "iostream"
#include <cctype>

int main(int args, char **shy)
{
    int i;
    int j;

    if(args == 1)
    { 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for (j = 1; shy[j]; j++)
    {
        for(i = 0; shy[j][i]; i++)
            shy[j][i] = toupper(shy[j][i]);
    }
    
    for (j = 1; shy[j]; j++)
    {
        for(i = 0; shy[j][i]; i++)    
            std::cout << shy[j][i];
       if(args > 2 && shy[j + 1])     
        std::cout  << " ";
    }
  
    std::cout  << std::endl;
   return(0); 
           
}
