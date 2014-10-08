#include <stdio.h>

int fib(int n);

int main(void) {
    printf("%d\n", fib(10));
}

/* Example d'exécution:          */
/* fib(3) -> fib(2) + fib(1)     */
/*           fib(1) + fib(0) + 1 */
/*           1 + 0 + 1           */
/*           2                   */
int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
