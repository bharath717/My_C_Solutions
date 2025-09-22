// Task

// Given a five digit integer, print the sum of its digits.

// Input Format

// The input contains a single five digit number,n.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    sum = sum+n % 10;      
    n /= 10;
    sum = sum+ n % 10;      
    n /= 10;
    sum = sum+n % 10;           
    n /= 10;
    sum = sum+ n % 10;      
    n /= 10;
    sum = sum+ n;           
    printf("%d\n", sum);
    return 0;
}