#include <stdio.h>
int main() 
{
    printf("To convert byte to kb,mb,gb \n");
    printf("enter byte for conversion : ");
    float byte,mb,kb,gb;
    scanf("%f",&byte);
    kb = byte / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("There are %f KB, %f MB, %f GB\n", kb, mb, gb);
    return 0;
}