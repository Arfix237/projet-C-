#include "fibonacci.h"
int calcul(int n) {
    int fib[n];
    for (int i = 0; i <= n; i++) {
        if (i < 2) {
            fib[i] = i;
        } else {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    return fib[n];
}
