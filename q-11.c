#include <stdio.h>
int main() 
{ 
    printf("Changing kilo grams to  grams \n ");
    printf("Enter kilo grams to change : ");
    float k;
    scanf("%f",&k);
    k=k*1000;
    printf("There are %f grams . ",k);
}


