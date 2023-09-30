#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n,ini,fin;
    int* primes = NULL; // Ponteiro para o array dinâmico
    int num_primes = 0; // Contador de números primos

    scanf("%d %d", &ini, &fin);

    n = fin;

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            primes = realloc(primes, (num_primes + 1) * sizeof(int));
            if (primes == NULL) {
                printf("Erro de alocação de memória.\n");
                return 1;
            }
            primes[num_primes] = i;
            if(i >= ini && i<= fin){
                num_primes++;
            }

        }
    }

    printf("%d", num_primes);

    // Liberar memória alocada
    free(primes);

    return 0;
}
