#include <stdio.h>
int main()
{ 
    printf("To find the net salary \n");
    printf("Enter the gross salary :");
    float s,a,d,n;
    scanf("%f %f %f",&s,&a,&d);
    a=s*0.1;
    d=s*0.03;
    n=s+a-d;
    printf("Net salary is : %f\n",n);
    printf("Allowance : %f\n",a);
    printf("Deduction : %f\n",d);
}