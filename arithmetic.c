#include <stdio.h>
#include <math.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int factorial(int n);
double power(double base, int exponent);
double squareRoot(double x);
int isPrime(int n);

int main() {
    printf("Math Utilities in C\n");
    printf("===================\n\n");

    // Basic arithmetic
    printf("Basic Arithmetic:\n");
    printf("5 + 3 = %.2f\n", add(5, 3));
    printf("5 - 3 = %.2f\n", subtract(5, 3));
    printf("5 * 3 = %.2f\n", multiply(5, 3));
    printf("5 / 3 = %.2f\n\n", divide(5, 3));

    // More complex operations
    printf("Complex Operations:\n");
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("2^5 = %.2f\n", power(2, 5));
    printf("Square root of 16 = %.2f\n", squareRoot(16));
    
    // Prime number check
    int num = 17;
    printf("%d is %s\n\n", num, isPrime(num) ? "prime" : "not prime");

    // Trigonometric functions
    printf("Trigonometric Functions:\n");
    double angle = M_PI / 4; // 45 degrees in radians
    printf("sin(45°) = %.2f\n", sin(angle));
    printf("cos(45°) = %.2f\n", cos(angle));
    printf("tan(45°) = %.2f\n\n", tan(angle));

    // Logarithmic functions
    printf("Logarithmic Functions:\n");
    printf("log(10) = %.2f\n", log(10));    // Natural logarithm
    printf("log10(100) = %.2f\n", log10(100));  // Base 10 logarithm

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double power(double base, int exponent) {
    return pow(base, exponent);
}

double squareRoot(double x) {
    return sqrt(x);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}