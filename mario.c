#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int height=0;
    bool isValid=false;
    do{
        height = get_int("How high would you like the pyramid? 1-23: ");

        if(height>0 || height<24){
            isValid=true;
        }
    }while(!isValid);


    for(int i=height;i>0;i--){
        for(int k=0;k<i;k++){
                printf(" ");
            }
        for(int j=0;j<(height-i);j++){

            printf("#");

        }
        printf("  ");
        for(int j=0;j<(height-i);j++){

            printf("#");

        }
        printf("\n");

    }


}