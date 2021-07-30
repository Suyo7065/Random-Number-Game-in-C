#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int number;
    int nguesses = 1;
    int guess;

    srand(time(0));
    number = rand() % 100 + 1;

    // printf("the random number is %d \n",number);

    do
    {

        printf("Guess the number between 0 to 100 \n");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Please high the number!\n");
        }
        else if (guess > number)
        {
            printf("Please lower the number!\n");
        }

        else
        {

            printf("Woohoo!! You guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}
