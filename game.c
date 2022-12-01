#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int n)
{
    int guess, random, count = 0;

    srand(time(NULL));   // for generating random number
    random = rand() % n; // picking a random number between 0 to the range given as input

    do
    {
        printf("Enter a no to guess: ");
        scanf("%d", &guess);
        if (guess > random)
        {
            printf("Too high\n");
            count++; // for counting miss guess
        }
        else if (guess < random)
        {
            printf("Too low\n");
            count++; // for counting miss guess
        }
        else
        {
            printf("Success!\n");
            printf("You took %d chance to guess it correctly", count);
        }
    } while (guess != random);
}

int main()
{
    int n;
    printf("Enter the range for the guess: ");
    scanf("%d", &n);

    game(n);
}