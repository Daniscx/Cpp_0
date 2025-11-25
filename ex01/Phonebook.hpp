/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:54:12 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/25 18:08:14 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>
class contact
{
    private:
        char name[1024];
        char number[1024];
        char last_name[1024];
        char nickname[1024];
        char darkest_secret[1024];
    public:
        contact();
       contact(char info[5][1024]);
    void
        display_contact();
    void 
        delete_contact();
        
};
class Phone
{
    private:
        contact contacts[8];
        int index;
    public:
        Phone();
        void
            add_contact();
        void
            search_contact();
};
# endif