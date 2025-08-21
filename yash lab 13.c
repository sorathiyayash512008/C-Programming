#include <stdio.h>

int main()
{
    float bytes,kb,mb,gb;
    
    printf("Enter bytes");
    scanf("%f",&bytes);
    
    kb=bytes/1000;
    mb=bytes/1000000;
    gb=bytes/1000000000;
    
    printf("Conversion into Kb is %f\n",kb);
    printf("Conversion into Mb is %f\n",mb);
    printf("Conversion into Gb is %f\n",gb);
    
    return 0;
}
