#include <stdio.h>
int main()
{
    printf("To swap the numbers \n");
    printf("Enter the two numbers for swaping : ");
    float x,y,t;                                    // We would create a temporary variable t
    scanf("%f %f %f",&x,&y,&t);
    t=x;   // we will make the first number as a temporary variable
    x=y;
    y=t;
    printf("After swapping : %f %f\n",x,y);
}