#include <stdio.h>

    int sum_to_n(int n){
        int sum=0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }


int main() {   
    int n;
    printf("Enter yo numba: ");
    scanf("%d", &n);

    if(n < 1){
        printf("Error, do not choose <1 :P\n");
        return 1;
    }
    printf("%d\n", sum_to_n(n));
    return 0;
}