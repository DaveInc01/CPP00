#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
        for (size_t j = 0; j < strlen(argv[i]); j++)
            putwchar(toupper(argv[i][j]));
    return (0);
}