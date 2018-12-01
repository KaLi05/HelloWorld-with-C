#include <stdio.h>

int main()
{
    int i;
    double number, sum = 0.0;

    for(i=1; i <= 10; ++i) // i <=10 shows the number to be ended in row in console
    {
        printf("Enter a N%d: ",i);
        scanf("%Lf",&number);

        // If user enters negative number above -110.0, loop is terminated
        if(number < -110.0)
         {
            break;
        }

        sum += number; // sum = sum + number;
    }

    printf("Sum = %.4Lf",sum); // Lf is for the Long float reading in double keyword, 4 de3fine the lenght of digit after foat e.g  .1234
    
    getch();
}

