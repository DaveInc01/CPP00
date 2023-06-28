#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <sstream>

class Contact{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    void set_first_name(std::string new_fn);
    void set_last_name(std::string new_ln);
    void set_nickname(std::string new_nn);
    void set_phone_num(std::string new_pn);
    void set_secret(std::string new_ds);
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_num();
    std::string get_secret();
};

# endif