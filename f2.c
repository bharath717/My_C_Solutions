//Pattern printing eg:
//3 3 3 3 3 
//3 2 2 2 3 
//3 2 1 2 3 
//3 2 2 2 3 
//3 3 3 3 3 
                   
                   
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int size=2*n-1;
    
    for(int i=0;i<size;i++) 
    {
        for (int j=0;j<size;j++) 
        {
            int min= i<j?i:j;
            min =min<size-i? min:size-i-1;
            min =min<size-j? min:size-j-1;
            printf("%d",n-min);
        }
        printf("\n");
    }

    return 0;
}