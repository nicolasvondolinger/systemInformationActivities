#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float average(int d, float n[][100]){
    int a = 0;
    for(int i = 0; i<d; i++){
        for (int j= 0; j<d ; j++){
            a = a + n[i][j];
        }
    }
    return a/d*d;
}

void identity(int d, float n[][100]){
    for (int l = 0; l<d; l++){
        for(int c = 0; c<d; c++){
            if (c = l){
                printf(" 1");
            } else{
                printf(" 0");
            }
        }
        printf("\n");
    }
}

void transpost(int d, float n[][100], float t[][100]){
    for(int l = 0; l<d; l++){
        for(int c = 0; c< d; c++){
            if (c != l){
                t[l][c] = n[c][l];
            } else{
                t[l][c] = n[l][c];
            }
            printf(" %.0f", t[l][c]);
        }
    }
}

bool simetric(int d, float n[][100]){
    int r = 1;
    for (int l = 0; l < d; l++){
        for (int c = 0; c < d; c++){
            if (n[l][c] != n[c][l]){
                r = 0;
                return r;
            }
        }
        
    }
    return r;
}

void amount(int d, float n[][100], float m[][100], float a[][100]){
    for (int l = 0; l < d; l++){
        for (int c = 0; c < d; l++){
            a[l][c] = n[l][c] + m[l][c];
            printf(" %f", a[l][c]);
        }
    }
}

void mult(int d, float n[][100], float m[][100], float p[][100]){
    int mult = 0, soma = 0;
    for (int l = 0; l < d; l++){
        for (int c = 0; c < d; c++){
            for (int i = 0; i < d; i++){
                mult = n[l][i] * m[i][c];
                soma =+ mult;
            }
            p[l][l] = soma;
            printf(" %.0f", p[l][c]);
            soma = 0;
        }
        printf("\n");
    }
}

int main(){

    FILE * matriz_1 = fopen("matriz.txt", "r");

    int lines, columns, d;    
    d = lines;

    if(matriz_1 == NULL){
        printf("\n Error while opening the file. \n");
        return 1;
    }

    fscanf(matriz_1, "%d %d", &lines, &columns);
    int n[lines][columns];

    for(int i = 0; i<lines; i++){
        for (int j= 0; j<columns ; j++){
            fscanf(matriz_1, "%f ", &n[i][j]);
        }
    }
    
    printf(" 1 - Average of the numbers in the file: %lf", average(d, n[lines][columns]));
    
    printf(" 2 - The identity of this matriz is: ");
    identity(d, n[lines][columns]);
    
    printf(" 3 - Transpost: ");
    int t[lines][columns];
    transpost(d, n[lines][columns], t[lines][columns]);    

    printf(" 4 - This matriz is simetric?");
    simetric(d, n[lines][columns]);

    FILE * matriz_2 = fopen("matriz2.txt", "r");

    if(matriz_2 == NULL){
        printf("\n Error while opening the file. \n");
        return 1;
    }

    fscanf(matriz_2, "%d %d", &lines, &columns);
    int m[lines][columns];

    for(int i = 0; i<lines; i++){
        for (int j= 0; j<columns ; j++){
            fscanf(matriz_2, "%d ", &m[i][j]);
        }
    }

    printf(" 5 - The amount of matriz A and B is:");
    int a[lines][columns];
    amount(d, n[lines][columns], m[lines][columns], a[lines][columns]);

    printf(" 6 - The multiplication of matriz A and B is:");
    int p[lines][columns];
    mult(d, n[lines][columns], m[lines][columns], p[lines][columns]);

    return 0;
}