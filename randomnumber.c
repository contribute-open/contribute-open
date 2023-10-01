//this is beginer friendly number guessing game//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess;
    printf("\n---------------------------------------------");
    printf("\nWELCOME TP THE NUMBER GUESSING GAME");
    printf("\n---------------------------------------------");
    srand(time(0));
    number=rand()%100+1;
    nguess=1;
    do
    {
      printf("\nGuess an number between 1 to 100:");
      scanf("%d",&guess);
      if(guess<number)
      {
        printf("Guess a little higher!!\n");
      }
      else if(guess>number)
      {
        printf("Guess a little lower!!\n");
      }
      else
      {
        printf("Congratulations you have guessed the right number IN %d attempts!!",guess);
      }
      nguess++;
    } while (guess!=number);
    printf("Thank you for playing");
    return 0;
    
}
