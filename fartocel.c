#include <stdio.h>
int main()
{
    printf("To convert  fahrenheit to degree celsius \n");
    printf("enter degree fahrenheit for conversion : ");               
    float c,f;
    scanf("%f", &f);
    c=(f - 32) /1.8;
    printf("There are %f Celsius\n", c);
    return 0;
}