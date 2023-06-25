#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook{
    public:
    Contact contacts[8];
    int  index;
    int search_contact(Phonebook& book);
    int show_contact(Phonebook& book);
};

int         line_check(std::string line);
void        print_dashes(void);
std::string check_size(std::string string);
int         ft_stoi(std::string number);

#endif