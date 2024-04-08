#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        unsigned long long fibN = 0, a = 0, b = 1;
        if (N == 0) {
            fibN = 0;
        } else if (N == 1) {
            fibN = 1;
        } else {
            for (int i = 2; i <= N; i++) {
                fibN = a + b;
                a = b;
                b = fibN;
            }
        }
        printf("Fib(%d) = %llu\n", N, fibN);
    }
    return 0;
}
