#include <stdio.h>
int main()
{
    printf("SIMPLE INTEREST CALCULATION \n");
    printf("enter 1 if u want to calculate simple interest: ");
    float c;
    scanf("%f",&c);
    if (c == 1)
    {
        printf("You have chosen to calculate simple interest. Press any key\n");
            float p,r,t,s;
            scanf("%f",&p);
            printf("Enter principal amount: ");
            scanf("%f",&r);
            printf("Enter rate of interest: ");
            scanf("%f",&t);
            printf("Enter time in years: ");
            scanf("%f",&s);
            s=(p*r*t)/100;
            printf("Simple Interest is: %f\n",s);
    }
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }

}