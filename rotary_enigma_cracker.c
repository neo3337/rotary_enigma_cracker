//rotary enigma cracker, rotary_enigma_cracker.c by Denisov Arsene, GNU GPL license

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enigma_length = 5;
    int characters_length = 5;
    char* enigma = (char*)malloc(enigma_length);
    char* message = " : enigma rotation performed : ";
    int i = 0;

    while (1)
    {
        i = i + 1;

        if (i < (int)pow(enigma_length, 2))
        {
            int i2 = 0;

            char* characters = (char*)malloc(characters_length);
            for (i2 = 0; i2 < (int)pow(characters_length, 2); i2++)
            {
                enigma[i] = characters[i2];
                printf(message);
            }
            break;
        }

        free(enigma);

        break;
    }

    return 0;
}

