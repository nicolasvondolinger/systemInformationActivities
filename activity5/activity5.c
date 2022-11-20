#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n){
    int fat = 1; 
    for(int cont = n; cont>1 ; cont--){
        fat = fat * cont;
    }
    return fat;
}

int mdc(int a, int b){
    int i = 1;
    int j = 1;
    while (( i<= a && i <=b)){
        if ((a%i==0)&&(b%i==0)){
            j = i;
        } i++;
    }
    return j;
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a, b), c);
}

int fib(int n){
    int f1 = 0, soma = 1, fn;
    if(n<=1) return 1;

    for(int i = 0; i<n-1; i++){
        fn = f1 + soma;
        f1 = soma;
        soma = fn;
    }

    return soma;
}

int prime(int x, int n){
    int num;
    while (n > 1){
        if (x%n==0){
            num = 0;
            break;
        } else {
            num = 1;
        }
        n--;
    }
    if (num == 1){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int decrease(int x){
    for(int cont = x; cont>=0; cont--){
        printf("%d ", cont);
    }
}

int rest(int a, int b){
    while(a-b>0){
        a = a - b;
    }
    return a;
}

int form(int n){
    int soma = 0;
    int mult = 0;
    for(int cont = n; cont >= 1; cont--){
        mult = cont*cont;
        soma = soma + mult;
    }
    return soma;
}

int mmc(int a, int b){
    return((a*b)/mdc(a, b));
}

int division(int a, int b){
    return(a/b);
}

float squareRoot(float x, float chute){
    while ( chute * chute >= x + 0.001 || chute * chute <= x - 0.001){
        if (chute * chute > x){
            chute = chute * 0.5;
        }
         else {
            chute = chute * 1.5;
        }
    }
    return chute;
}

int dig(int n){
    int dig;
    int soma = 0;
    for (int num = n; num > 0; num = num/10){
        dig = num % 10;
        soma += dig;
    }
    return soma;
}

int exponent(int k, int n){
    int mult = k;
    for(int cont = 1; cont < n; cont++){
        mult = mult*k;
    }
    return mult;
}

int rise(int n){
    for(int cont = 0; cont<n; cont++){
        printf("%d ", cont);
    }
    printf("%d\n", n);
}

int main(){

    int a, b, c, n, k;
    float x;
    
    printf("\n Type a number (a): ");
    scanf("%d", &a);
    printf(" Type a number (b): ");
    scanf("%d", &b);
    printf(" Type a number (c): ");
    scanf("%d", &c);
    printf(" Type a number (n): ");
    scanf("%d", &n);
    printf(" Type a number (k): ");
    scanf("%d", &k);
    printf(" Type a number (x): ");
    scanf("%f", &x);
    printf(" __________________________________________\n\n");

    printf(" a - Fatorial of %d is: %d\n", n, fat(n));
    
    printf(" b - MDC of numbers %d and %d is: %d\n", a, b, mdc(a, b));

    printf(" c - MDC of numbers %d, %d and %d is: %d\n", a, b, c, mdc3(a, b, c));

    printf(" d - The %d number in the Fibonnacci sequence is: %d\n", n, fib(n));
    
    printf(" e - The number %d is prime? ", a);
    prime(a, a-1);

    printf(" f - Decrease sequence of number %d is: ", n);
    decrease(n);

    printf("\n g - The rest of the division between %d and %d is: %d\n", a, b, rest(a, b));

    printf(" h - The sum of the square of each number until it reaches %d is: %d\n", n, form(n));

    printf(" i - MMC of numbers %d and %d is: %d\n", a, b, mmc(a, b));

    printf(" j - Division between numbers %d and %d is: %d\n", a, b, division(a, b));

    printf(" l - Square Root of %.0f is: %f\n", x, squareRoot(x, x*0.5));

    printf(" m - The digit's sum of the number %d is: %d\n", n, dig(n));

    printf(" n - %d elevated at %d is: %d\n", k, n, exponent(k, n));

    printf(" o - The ascending sequence of number %d is: ", n);
    rise(n);

    return 0;
}