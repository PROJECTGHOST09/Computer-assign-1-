#include <stdio.h>
int main()
{ 
    printf("Dollar to pound  conversion \n");
    printf("1D=48rs,1P=70rs\n");
    printf("Enter amount in inr : ");
    float i,d,p;
    scanf("%f",&i);
    d=i*48;
    p=d*1.45833; // as 1 dollar is equal to 48 inr and i pound is equal to 70 inr so ny solving in inr we get 1 inr=(d/48)=(p/70)
    printf("Amount in pounds (converted from dollar): %f \n", p);
    return 0;
}

