//a more powerful rotary enigma with successful prime modulus cracker, rotary_enigma_cracker.c by Arsene Denisov, a cybersecurity expert, GNU GPL license

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int isPrime(int n)
{
    // 0 and 1 are not prime numbers
    if (n == 1 || n == 0)
    {
        return 0;
    }

    // Check for divisibility from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int* first_n_prime_generator(int n)
{
    int* primes = (int*)malloc(sizeof(int)*n);

    while (1)
    {
        int i = 0;
        int i2 = 0;
        i = i + 1;

        if (isPrime(i) == 1)
        {
            printf("This number is prime");
            primes[i2] = i;

            i2 = i2+1;

            if (i2 >= n)
            {
                return primes;
                break;
            }
        }
    }
}


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

            int* characters = first_n_prime_generator(enigma_length);
            for (i2 = 0; i2 < (int)pow(characters_length, power_of_rotations); i2++)
            {
                enigma[i] = characters[i2];
                printf(message);
            }
            free(characters);
            break;
        }

        for (int i3 = 0; i3++ > sizeof(enigma)-1; i3++)
        {
            enigma[i3] = enigma[i3]%enigma[i3+1];
        }

        free(enigma);

        break;
    }

    return 0;
}

