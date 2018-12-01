#include <stdio.h>
#include <conio.h>
int main()
{ // a b sum is variable
int a, b, sum;
printf("Enter The First Number: ");
// %d defines the programming format its int
// here &a is a storage of first number
scanf("%d", &a);
printf("Enter The Second Number : ");
scanf("%d", &b);
printf("Total: ");
// this is the sum of two values
sum = a + b;
// print the value on the screen
printf("%d", sum);
// getch() to hold the screen in console 
getch();

}
