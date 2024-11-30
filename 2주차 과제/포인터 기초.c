#include <stdio.h>

int main()
{   
    int i = 10;
    int* p;
    p = &i;
 
    printf("i = %d\n", i);
    printf("address of i = %p\n", p); //주소를 나타내기 위해선 %p를 사용
    printf("*p = %d\n", *p);
    return 0;
}
