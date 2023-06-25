#include "includes/Phonebook.hpp"

int line_check(std::string line)
{
    int i = 0;
    while (i < (int )line.length())
    {
        if((line[i] != ' ') && (line[i] != '\t'))
            return (0);
        i++;
    }
    return (-1);
}

void print_dashes(void)
{
    for (int i = 0; i < 45; i++)
        std::cout << "-";
    std::cout << std::endl;
}

std::string check_size(std::string string)
{
    std::string space = "";
    std::string result;
    boost::trim_left(string);
    boost::trim_right(string);
    if(string.length() < 10)
    {
        for (int i = string.length(); i < 10; i++)
        {
            space = space.append(" ");
        }
        result = space.append(string);
    }
    else
    {
        result = string.substr(0, 9);
        result = result.append(".");
    }
    return (result);
}

int ft_stoi(std::string number)
{
    int i = 0;
    int flag = 0;
    for (char c : number) {
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
        else {
            return (-1);
        }
        flag = 1;
    }
    if (flag)
        return (i);
    return (-1);
}