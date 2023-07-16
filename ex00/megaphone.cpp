#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t j = 0; j < strlen(argv[i]); j++)
                putwchar(toupper(argv[i][j]));
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
