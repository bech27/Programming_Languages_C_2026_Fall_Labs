#include <stdio.h>

    long long factorial(int n){
        long long mult = 1;
        for (int i = 1; i <= n; i++) {
            mult *= i;
        }
        return mult;
    }


int main() {   
    int n;
    printf("Enter yo numba: ");
    if (scanf("%d", &n) !=1){
        printf("Ņaurr");
        return 1;
    }

    if(n < 0){
        printf("Error, do not choose <0 :P\n");
        return 1;
    }
    printf("%lld\n", factorial(n));
    return 0;
}
