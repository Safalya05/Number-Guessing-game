#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0)); //generates a  different random number each time
    number=rand()%100 +1; //generates a random number between 1 to 100
    //keeps the loop running until the number is guessed right
    do{
        printf("Guess the number between 1 to 100:");
        scanf("%d",&guess);
        if(guess>number)
        printf("Lower number please!\n");
        else if(guess<number)
        printf("Higher number please!\n");
        else
        printf("WOW!\nRight guess!\nYou guessed it in %d attempts",nguess);
        nguess++; //calculating number of guesses
    }while(nguess!=number);
    return 0;
}

