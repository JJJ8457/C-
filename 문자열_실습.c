#include <stdio.h>

int main()
{
    char message2[5] = {'a', 'b', 'c', 'd', '\0'};
    char message[5] = {'a', 'b', 'c', '\0'};
    
    printf("message = %s, mmessage2 = %s", message, message2);
    
    return 0;
}
