#include <stdio.h>
#define SIZE 100
int main()
{
    int array[100];
    FILE* fp;
    
    for(int i=0;i<100;i++) array[i]=i;
    
    fp=fopen("array.bin", "wb");
    if(fp==NULL) return -1;
    
    fwrite(array, sizeof(array), 1, fp);
    
    fclose(fp);
    return 0;
}
