#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
 
    int count[10000001] = {0};
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]--;
    }
    for (int i = 1; i <= 10000000; i++) {
        if (count[i] != 0) {
            printf("no\n");
            return 0;
        }
    }
 
    printf("yes\n");
    return 0;
}
