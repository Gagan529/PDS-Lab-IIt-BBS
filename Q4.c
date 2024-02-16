#include <stdio.h>


int prime(int n) {
    if (n <= 1)
        return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int k=0;
    for(int i=1; i<num/2 ;i++)
    {
        k=num-i;
        if(prime(i)==1&&prime(k)==1 )
        {
            printf("%d%d",k,i);
        }
        
    }
    
    return 0;
}
