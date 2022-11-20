#include <stdio.h>
#include <math.h>
#define PI 3.1415

float media(float a, float b, float c){
    return((a+b+c)/3);
}

float mediaPonderada(float a, float b, float c){
    return((a*3)+(b*4)+(c*5)/12);
}

float perimetroCirculo(float r){
    return(2*PI*r);
}

float areaCirculo(float r){
    return(PI * pow(r, 2));
}

float areaTriangulo(float b, float c){
    return((b*c)/2);
}

float areaCaixa(float a, float b, float c){
    return(a*b*c);
}

float volumeCaixa(float a, float b, float c){
    return(a*b*c);
}

float areaCilindro(float r, float h){
    return((2*PI*r*h)+(2*(PI*pow(r, 2))));
}

float volumeCilindro(float r, float h){
    return(PI*pow(r, 2)*h);
}

float hipotenusa(float b, float c){
    return(sqrt(pow(b, 2) + pow(c, 2)));
}

float raizPositiva(float a, float b, float c) {
    
    float delta = (pow(b, 2)) - (4*a*c);
    float R1, R2;

    if (delta > 0){
        R1 = -b + sqrt(delta)/(2*a);
        R2 = -b - sqrt(delta)/(2*a);
    } else if (delta == 0){
        R1 = -b/(2*a);
        R2 = -b/(2*a);
    } else {
        R1 = 0;
        R2 = 0;
    }
    return(R1, R2);
}
    

int main () {

    float a, b, c, r, h;

    printf("    Digite o valor de a: ");
    scanf("%f", &a);
    printf("    Digite o valor de b: ");
    scanf("%f", &b);
    printf("    Digite o valor de c: ");
    scanf("%f", &c);

    printf("\n\n");

    printf("1 - a) Média dos números a, b e c: %f\n", media(a, b, c));
    printf("    b) Média ponderada dos números a, b e c: %f\n\n", mediaPonderada(a, b, c));
    printf("    ___________________________________________________________________________\n\n");
    printf("    Digite o valor do raio: ");
    scanf("%f", &r);
    printf("    c) Perímetro do circulo: %f\n", perimetroCirculo(r));
    printf("    d) Área do círculo: %f\n", areaCirculo(r));
    printf("    e) Área do triângulo: %f\n", areaTriangulo(b, c));
    printf("    f) Área da caixa: %f\n", areaCaixa(a, b, c));
    printf("    g) Volume da caixa: %f\n", volumeCaixa(a, b, c));
    printf("    ___________________________________________________________________________\n\n");
    printf("    Digite a altura do cilindro: ");
    scanf("%f", &h);
    printf("    h) Área do cilindro: %f\n", areaCilindro(r, h));
    printf("    i) Volume do cilindro: %f\n", volumeCilindro(r, h));
    printf("    j) Hipotenusa do triângulo retângulo: %f\n", hipotenusa(b, c));
    printf("    k) Raiz positiva: %f\n", raizPositiva(a, b, c));
    
    return 0;
}