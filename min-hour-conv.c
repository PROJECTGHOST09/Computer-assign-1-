#include <stdio.h>
int main()
{
    printf("Changing minutes to hour \n");
    printf("Enter the minutes you  want to convert ");
    float m ;
    scanf("%f",&m);
    m=m/60;
    printf("The time in hours is : %f",m);

}
