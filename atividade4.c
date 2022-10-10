#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n){
    if (n == 0) return n=1;
    return n * factorial(n-1);
}

int mdc(int a, int b){
    if(b == 0) return a;
    return(mdc(b, a%b));
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a,b), c);
}

int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

int prime(int x, int n){
    if(n==1){
        printf("\n e - The number %d is prime? Yes", x);
    } else if(x == 1){
        printf("\n e - The number %d is prime? No", x);
    } else if(x % n == 0){
        printf("\n e - The number %d is prime? No", x);
    } else{
        return prime(x, n-1);
    }
}

int decr(int x){
    if (x == 0) {
        printf("%d\n", x);
    } else {
        printf("%d ", x); 
        return decr(x-1);
    }
}

int rest(int a, int b){
	if(a - b < 0) return a;
	return(rest(a - b, b));
}

int form(int n){
    if (n <= 1) return n;
    else return (n*n) + form(n-1);
}

int mmc(int a, int b){
    if (a%b==0){
        return(a);
    } else if (b%a==0){
        return(b);
    } else {
        return(a*b/mdc(a,b));
    }
}

int division(int a, int b){
    return(a/b);
}

float squareRoot(float s, float chute){
    if (chute * chute >= s-0.001 && chute*chute <= s+0.001){
        return chute;
    } else if(chute* chute > s){
        return squareRoot(s, chute*0.5);
    } else if(chute * chute < s){
        return squareRoot(s, chute*1.5);
    }
}

int dig(int n, int soma){
    int digito;
    if (n <= 0) {
        return soma;
    } else{
        digito = n % 10;
        soma = soma + digito;
        return dig(n/10, soma);
    } 
}

int potency(int k, int n){
    if (n==0) return 1;
    return (k * potency(k, n-1));
}

int rise(int x, int n){
    if (n == x) {
        printf("%d\n", x);
    } else {
        printf("%d ", n); 
        return rise(x, n+1);
    }
}

int main(){

    int a, b, c, k, n, x;
    float s;

    printf("\n Exercise 1 - List 4\n\n");
    
    printf(" Type a number: ");
    scanf("%d", &n);
    
    printf("\n a - The factorial of %d is: %d\n", n, factorial(n));

    printf("\n Type another number: ");
    scanf("%d", &a);
    printf("\n Type another number: ");
    scanf("%d", &b);
    printf("\n Type another number: ");
    scanf("%d", &c);
    
    printf("\n b - The MDC of %d and %d is: %d\n", a, b, mdc(a, b));
    
    printf(" c - The MDC of %d, %d and %d is: %d\n", a, b, c, mdc3(a, b, c));
    printf(" d - The %d number in Fibonacci sequence is: %d\n", n ,fib(n));

    printf("\n Type another number: ");
    scanf("%d", &x);
    
    prime(x, x-1); //e
    
    printf("\n f - Descending sequence of number %d is: ", x);
    decr(x); //f
    
    printf(" g - The rest of the division between %d and %d is: %d\n", a, b, rest(a, b)); //g

    printf(" h - The sum of i*i with i ranging from 1 to %d is: %d\n", n, form(n));
    
    printf(" i - The MMC between %d and %d is: %d\n", a, b, mmc(a, b)); //i

    printf(" j - Division between %d and %d is: %d\n", a, b, division(a, b)); //j
    
    printf("\n Type a number: ");
    scanf("%d", &k);

    printf("\n Type another number: ");
    scanf("%f", &s);

    printf("\n l - The square root of %f is: %f\n", s, squareRoot(s, s*0.5)); //l

    printf(" m - The sum of the digits of the number %d is: %d\n", n, dig(n, 0)); //m
    
    printf(" n - Potency of %d elevated at %d is: %d\n", k, n, potency(k, n)); // n
    
    printf(" o - 0 to %d is: ", x); //o
    rise(x, 0);

    return 0;
}