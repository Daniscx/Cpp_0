/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 21:06:44 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/25 21:08:06 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>


class Contact
{
    private:
        std::string name;
        std::string number;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
    public:
        Contact();
       Contact(std::string info[5]);
    void
        display_contact();
    void 
        delete_contact();
    void
        display_secret_contact();
        
};




#endif