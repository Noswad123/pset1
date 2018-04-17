#include <cs50.h>
#include <stdio.h>


int main (void)
{
  int changeOwed=0;
  int dimes=0;
  int quarters=0;
  int nickels=0;
  int pennies=0;
  int coinCounter=0;
  float temp=0;

  do{
    temp=get_float("Change owed: ");
  }while(temp==0);

  changeOwed=temp/.01;
    if(changeOwed>=25)
    {
        quarters=changeOwed/25;
        coinCounter+=quarters;
        changeOwed=changeOwed%25;
    }
      if(changeOwed>=10)
    {
        dimes=changeOwed/10;
        coinCounter+=dimes;
        changeOwed=changeOwed%10;
    }
      if(changeOwed>=5)
    {
        dimes=changeOwed/5;
        coinCounter+=dimes;
        changeOwed=changeOwed%5;
    }
      if(changeOwed>=1)
    {
        pennies=changeOwed/1;
        coinCounter+=pennies;
        changeOwed=changeOwed%1;
    }
    printf("Coins used %i \n", coinCounter);
    printf("quarters: %i, dimes: %i, nickels: %i, pennies: %i \n",quarters, dimes, nickels, pennies);
}


