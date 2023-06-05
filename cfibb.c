#include <stdio.h>

//  `unsigned long long` 
// for this because the Fibonacci numbers quickly become very large.

#define SIZE 1000

unsigned long long fib[SIZE];

void calculate_fibonacci() {
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < SIZE; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void print_fibonacci() {
    for (int i = 0; i < SIZE; i++) {
        printf("Fibonacci[%d] = %llu\n", i, fib[i]);
    }
}

int main() {
    calculate_fibonacci();
    print_fibonacci();
    return 0;
}