//powers of 2
#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t x=0;
    uint32_t x_result=0;
    uint32_t n =0;
    printf("multiply with a power of 2\n");
    printf("Enter a number\n");
    scanf(" %d",&x);
    printf("Enter the power for 2\n");
    scanf(" %d",&n);
    printf("x = %d n = %d\n",x,n);
    x_result = x << n;
    printf("x_result = %d\n",x_result);
    return 0;
}