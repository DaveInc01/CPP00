#include "./includes/Contact.hpp"
#include "./includes/Phonebook.hpp"


int get_data(std::string field_name, Phonebook& book, int index, void (Contact::*func)(std::string))
{
    std::string line;

    std::cout << "Type your " << field_name << ": ";
        getline(std::cin, line);
        if (line_check(line) == 0)
        {

            (book.contacts[index].*func)(line);
            return (0);
        }
        else
        {
            std::cout << "The field can't be empty..." << std::endl;
            return (1);
        }
}

void add_contact(Phonebook& book)
{
    static int index = 0;
    if (index >= 8)
        index = 0;
    std::string line;
    while ((get_data("first name", book, index, &Contact::set_first_name)) == 1)
        ;
    while ((get_data("last name", book, index, &Contact::set_last_name)) == 1)
        ;
    while ((get_data("nickname", book, index, &Contact::set_nickname)) == 1)
        ;
    while ((get_data("phone number", book, index, &Contact::set_phone_num)) == 1)
        ;
    while ((get_data("darkest secret", book, index, &Contact::set_secret)) == 1)
        ;
    index++;
    if (book.index < 8)
        book.index++;
}

int Phonebook::search_contact(Phonebook& book)
{
    if (book.index == 0)
    {
        std::cout << "The Phonebook is empty!" << std::endl;
        return (-1);
    }
    print_dashes();
    std::cout << "|     index|first_name| last_name|  nickname|" << std::endl;
    for (int i = 0; i < book.index; i++)
    {
        print_dashes();
        std::cout << "|         " << i << "|" << check_size(book.contacts[i].get_first_name()) <<
                     "|" << check_size(book.contacts[i].get_last_name()) << "|" << 
                     check_size(book.contacts[i].get_nickname()) << "|" << std::endl;
    }
    print_dashes();
    return (0);
}

int Phonebook::show_contact(Phonebook& book)
{
    std::string line;
    int index;
    std::cout << "Index of the contact for more info: ";
    getline(std::cin, line);
    index = ft_stoi(line);
    if (index >= book.index || index < 0)
    {
        std::cout << "Out of range" << std::endl;
        return (0);
    }
    else if(index >= 0 && index < book.index)
    {
        std::cout << "First name: " << book.contacts[index].get_first_name() << std::endl;
        std::cout << "Last name: " << book.contacts[index].get_last_name() << std::endl;
        std::cout << "Nickname: " << book.contacts[index].get_nickname() << std::endl;
        std::cout << "Phone number: " << book.contacts[index].get_phone_num() << std::endl;
        std::cout << "Darkest secret: " << book.contacts[index].get_secret() << std::endl;
    }
    return (0);
}

int main()
{
    Phonebook book;
    std::string line;
    book.index = 0;
    
    while (line != "EXIT")
    {
        if (line == "ADD")
            add_contact(book);
        else if (line == "SEARCH")
        {
            if(book.search_contact(book) != -1)
                book.show_contact(book);
        }
        else if (line.length())
        {
            std::cout << "ADD | SEARCH | EXIT" << std::endl;
        }
        getline(std::cin, line);
    }
    std::cout << "The contacts are lost forever:(" << std::endl;
    return (0);
}