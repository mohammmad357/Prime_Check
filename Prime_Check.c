#include <stdio.h>

int number;
int counter = 0;
int a = 1;

int main(void)
{
    printf("Please Insert Your Number : ");
    scanf("%d" , &number);
    
    while (a <= number)
    {

        if (number % a == 0)
        {
            counter = counter + 1;
        }

        a = a + 1;
        
    }

    if (counter > 2)
    {
        printf("This Number Is Not Prime");
    }

    else if (counter == 2)
    {
        printf("This Number Is Prime");
    }
    
    return 0;
}