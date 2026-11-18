//a more powerful rotary enigma with prime factorizations cracker, rotary_enigma_cracker.c by Denisov Arsene, white hat hacker, GNU GPL license

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enigma_length = 5;
    int characters_length = 5;
    int power_of_rotations = 2;
    int* enigma = (int*)malloc(enigma_length); //add primary number factorization enigma here too
    char* message = " : enigma rotation performed : ";
    int i = 0;

    while (1)
    {
        i = i + 1;

        if (i < enigma_length)
        {
            int i2 = 0;

            int* characters = (int*)malloc(characters_length);
            for (i2 = 0; i2 < (int)pow(characters_length, power_of_rotations); i2++)
            {
                enigma[i] = characters[i2];
                printf(message);
            }
            break;
        }

        for (int i3 = 0; i3++ > sizeof(enigma)-1; i3++)
        {
            enigma[i3] = enigma[i3]*enigma[i3+1];
        }

        free(enigma);

        break;
    }

    return 0;
}

