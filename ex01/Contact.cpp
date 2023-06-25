#include "includes/Contact.hpp"

void Contact::set_first_name(std::string new_fn){
    first_name = new_fn;
}

void Contact::set_last_name(std::string new_ln){
    last_name = new_ln;
}

void Contact::set_nickname(std::string new_nn){
    nickname = new_nn;
}

void Contact::set_phone_num(std::string new_pn){
    phone_number = new_pn;
}

void Contact::set_secret(std::string new_ds){
    darkest_secret = new_ds;
}

std::string Contact::get_first_name(){
    return (first_name);
}

std::string Contact::get_last_name(){
    return (last_name);
}

std::string Contact::get_nickname(){
    return (nickname);
}

std::string Contact::get_phone_num(){
    return (phone_number);
}

std::string Contact::get_secret(){
    return (darkest_secret);
}