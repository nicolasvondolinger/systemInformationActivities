#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime (int x){
    for(int n = 2; n<x; n++){
        if (x%n==0){
            return 0;
        }
    }
    return 1;
}

float squaredFunction(float r){
    return(((r*r) - (5*r)) + 1);
}

int main (){
     
    //Question 1

    FILE * f_prime = fopen("prime.txt", "w+t");

    int n_primos = 0, x;

    if (f_prime == NULL){
        printf("\n Error while opening the file.\n");
        return(1);
    }
    

    printf("\n Type a number: ");
    scanf("%d", &x);

    for(int i = 2; n_primos<x; i++){
        if(prime(i)){
            fprintf(f_prime, "%d\n", i);
            n_primos++;
        }
    }

    fclose(f_prime);

    //Question 2

    FILE * f_natural = fopen("primeOrNot.txt", "w+t");
    FILE * naturals = fopen("natural.txt", "r");

    if(f_natural==NULL){
        fclose(f_prime);
        printf("\n Error while opening the file.\n");
        return(1);
    }

    int n;

    fscanf(naturals, "%d", &n);
    while(!feof(naturals)){
        fprintf(f_natural, "%d %d\n", n, prime(n));
        fscanf(naturals, "%d", &n);
    }

    fclose(f_natural);
    fclose(naturals);

    //Question 3

    int num;

    FILE * f_Primes = fopen("isPrime.txt", "w+t");
    FILE * f_notPrimes = fopen("isNotPrime.txt", "w+t");
    FILE * naturals2 = fopen("natural.txt", "r");

    fscanf(naturals2, "%d", &num);
    while (!feof(naturals2)){
        if (prime(num) == 1){
            fprintf(f_Primes, "%d\n", num);
        } else{
            fprintf(f_notPrimes, "%d\n", num);
        }
        fscanf(naturals2, "%d", &num);
    }

    fclose(f_Primes);
    fclose(f_notPrimes);
    fclose(naturals2);

    //Question 4

    FILE * f1_real = fopen("function.txt", "w+t");
    FILE * reals = fopen("real.txt", "r");

    if(f1_real==NULL){
        fclose(f_Primes);
        fclose(f_notPrimes);
        printf("\n Error while opening the file.\n");
        return(1);
    }
    
    float f;

    fscanf(reals, "%f", &f);
    while (!feof(reals)){
        fprintf(f1_real, "%f\n", squaredFunction(f));
        fscanf(reals, "%f", &f);
    }

    fclose(f1_real);
    
    //Question 5

    FILE * f2_real = fopen("function2.txt", "w+t");
    FILE * reals2 = fopen("real.txt", "r");

    if(f2_real == NULL){
        fclose(f1_real);
        fclose(f_Primes);
        fclose(f_notPrimes);
        printf("\n Error while opening the file.\n");
        return(1);
    }

    float s, a, b, c, d, resultado;

    printf("\n Type a number: ");
    scanf("%f", &a);
    printf("\n Type another number: ");
    scanf("%f", &b);
    printf("\n Type another number: ");
    scanf("%f", &c);
    printf("\n Type another number: ");
    scanf("%f", &d);

    fscanf(reals2, "%f", &s);
    while(!feof(reals2)){
        resultado = (a*(pow(s, 3))) + (b*(pow(s, 2))) + (c*s) + d;
        fprintf(f2_real, "%.3f\n", resultado);
        fscanf(reals2, "%f", &s);
    }    

    fclose(f2_real);
    fclose(reals2);

    return 0;
}