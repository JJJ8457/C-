#include <stdio.h>
#include <string.h>

int main()
{
    char src[100];
    char dest[100];
    int result;
    gets(src);
    gets(dest);
    
    result = strcmp(src, dest);
    printf("result = %d\n", result);
    
    //int length;
    //length = strlen(src);
    //printf("length of src = %d\n", length);
    //strcpy(dest, src);
    //printf("src = %s, dest = %s\n", src, dest);
    //strcat(dest, src);
    //printf("src = %s, dest = %s\n", src, dest);
   

    return 0;
}
