#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int showerTime;
    bool isValid=false;
    do{
        showerTime=get_int("Time in shower?: ");
        if(showerTime){

            isValid=true;
        }

    }while(!isValid);

        printf("Shower Usage: %i bottles\n",showerTime*12);
    }