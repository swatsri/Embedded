//Convert endianness
#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t x=0;
    uint32_t x_result=0;
    printf("converting endianness\n");
    printf("Enter a number\n");
    scanf(" %x",&x);
    printf("x = %x\n",x);
    x_result |= ((x & 0xFF000000) >> 24);
    x_result |= ((x & 0x00FF0000) >> 8);
    x_result |= ((x & 0x0000FF00) << 8);
    x_result |= ((x & 0x000000FF) << 24);
    printf("x_result = %x\n",x_result);
    return 0;
}
