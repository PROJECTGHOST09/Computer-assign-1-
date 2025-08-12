#include <stdio.h>
int main()
{
    printf("Changing dollar to inr \n");
    printf("Enter the dollar that u want to convert");
    float d;
    scanf("%f", &d);
    d=d*48;
    printf("The amount in INR is : %f",d);
}
