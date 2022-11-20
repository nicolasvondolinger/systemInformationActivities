#include <stdio.h>
#include <stdlib.h>

int max(float a, float b, float c){
    if (a > b && a > c){
        printf("\n %f is the bigger number\n", a);
    } else if(b > a && b > c){
        printf("\n %f is the bigger number\n", b);
    } else if (c > a && c > b) {
        printf("\n %f is the bigger number\n", c);
    } else {
        printf("\n Invalid numbers to print the bigger.\n");
    }
}

int min(float a, float b, float c){
    if (a < b && a < c){
        printf("\n %f is the smaller number\n", a);
    } else if(b < a && b < c){
        printf("\n %f is the smaller number\n", b);
    } else if (c < a && c < b) {
        printf("\n %f is the smaller number\n", c);
    } else {
        printf("\n Invalid numbers to print the smaller.\n");
    }
}

int pair(int x){
    if (x % 2 == 0){
        printf("\n %d is pair.\n", x);
    }else{
        printf("\n %d isn't pair.\n", x);
    }
}

int inside(int x, int y, int z){
    if (x>y && x<z || x<y && x>z){
        printf("\n %d is between %d and %d.\n",x,y,z);
    } else if (y>x && y<z || y<x && y>z) {
        printf("\n %d is between %d and %d.\n",y,x,z);
    } else if (z>x && z<y || z<x && z>y){
        printf("\n %d is between %d and %d.\n",z,x,y);
    } else {
        printf("\n Invalid numbers to get the period. ");
    }
}

int outside(int x, int y, int z){
    if (x<y || x>z){
        printf("\n %d isn't between %d and %d.\n",x,y,z);
    } else {
        printf("\n %d is between %d and %d or the numbers are invalids. \n", x, y, z);
    }
}

int leapYear(int year){
    if(year % 4 == 0){
        printf("\n %d is a leap year.\n", year);
    } else { 
        printf("\n %d isn't a leap year.\n", year);
    }
}

int main(){

    float a, b, c;
    int x, y, z, year;

    printf("\n Exercise 1\n\n");

    printf(" Type the first number: ");
    scanf("%f", &a);
    printf(" Type the second number: ");
    scanf("%f", &b);
    printf(" Type the third number: ");
    scanf("%f", &c);

    max(a,b,c);
    min(a,b,c);

    printf("\n _____________________________________________________\n\n");

    printf(" Exercise 2\n\n");

    printf(" Type the first number: ");
    scanf("%d", &x);
    printf(" Type the second number: ");
    scanf("%d", &y);
    printf(" Type the third number: ");
    scanf("%d", &z);

    pair(x);
    inside(x, y, z);
    outside(x, y, z);

    printf("\n _____________________________________________________\n\n");

    printf(" Exercise 3\n\n");

    printf(" Type the year: ");
    scanf("%d", &year);

    leapYear(year);

    return 0;
    
}
