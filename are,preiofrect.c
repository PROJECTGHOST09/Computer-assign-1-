#include <stdio.h>
int main()
{
    printf("To find the area and perimeter of a rectangle \n");
    printf("Enter the length and breadth :  ");
    float l,b,a,p;
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area is : %f\n",a);
    printf("Perimeter is : %f\n",p);
}
    