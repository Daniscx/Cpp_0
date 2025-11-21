/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:54:12 by dmaestro          #+#    #+#             */
/*   Updated: 2025/11/21 17:19:16 by dmaestro         ###   ########.fr       */
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
        char *name;
        char *number;
        char *last_name;
        char *nickname;
        char *darkest_secret;
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