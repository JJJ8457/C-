#include <stdio.h>

int main()
{
    char input[100];
    int ch, i;
    i = 0;
    while((ch = getchar())!= '\n') input[i++] =ch;
    input[i] = '\0';
    puts(input);
    return 0;
}

