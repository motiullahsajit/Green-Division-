#include<stdio.h>

int main(){

    int n;

    while (1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        long long int x = (n*(n+1)*(2*n+1))/6;
        printf("%lld\n", x);
    }
    
    
    return 0;
}