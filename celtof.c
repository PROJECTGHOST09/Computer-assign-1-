#include <stdio.h>
int main()
{
    printf("To convert degree celsius to fahrenheit\n");
    printf("enter degree celsius for conversion : ");               
    float c,f;
    scanf("%f", &c);
    f=(c*1.8)+32;
    printf("There are %f Fahrenheit\n", f);
    return 0;
}