#include <stdio.h>
int main()
{
    printf("To find the net sales \n");
    printf("Enter the gross sales :");
    float s,n,d;
    scanf("%f %f",&s, &d);
    d=s*0.10;
    n=s-d;
    printf("Net sales is : %f\n",n);
    printf("Discount : %f\n",d);
}
  