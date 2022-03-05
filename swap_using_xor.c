#include <stdio.h>

int main()
{
    int a = 0b11;
    int b = 0b101;
    printf("before swapping a = %d and b = %d\n",a,b);
    a = a ^ b; //0011 ^ 0101 = 0110
    b = a ^ b; //0110 ^ 0101 = 0011; same as a before 
    a = a ^ b; //0110 ^ 0011 = 0101; same as b before 
    printf("after swapping a = %d and b = %d\n",a,b);
    return 0;
}
