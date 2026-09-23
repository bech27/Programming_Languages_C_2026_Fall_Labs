#include <stdio.h>

    int is_prime(int n){
        if(n <= 1){
            return 0;
        }
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }

int main(void) {   
    int n;
    printf("Enter yo numba: ");
    if (scanf("%d", &n) != 1){
        printf("'Naurrr\n");
        return 1;
    }
    
    if(n <2){
        printf("Number must be above 2 -_-\n");
        return 1;
    }
    
    printf("Primes up to %d:\n", n);
    for (int i = 2; i <= n; i ++){
        if (is_prime(i)){
            printf("%d ", i);
        } 
    }
    printf("\n");
    return 0;
}