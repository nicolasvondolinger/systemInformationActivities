#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <iostream>
#define _USE_MATH_DEFINES

struct point{
    float x;
    float y;

    float distancy(point& p);
    void atribuir(float a, float b);
};

float point::distancy(point& p){
    return(sqrt((this->x - p.x)*(this->x - p.x) + (this->y - p.y)*(this->y - p.y)));
}

void point::atribuir(float a, float b){
    this->x=a;
    this->y=b;
}

struct triangulo{
    point t1, t2, t3;

    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(triangulo& t);
};

float triangulo::perimetro(){
    return(t1.distancy(t2) + t1.distancy(t3) + t2.distancy(t3));
}

float triangulo::area(){

}

bool triangulo::equilatero(){
    if(t1.distancy(t2) == t1.distancy(t3) && t1.distancy(t2) == t2.distancy(t3)){
        return true;
    } else{
        return false;
    }
}

bool triangulo::semelhante(triangulo& t){
    float lados_t1[3] = {this->t1.distancy(this->t2), this->t1.distancy(this->t3), this->t2.distancy(this->t3)};
    float lados_t2[3] = {t1.distancy(t2), t1.distancy(t3), t2.distancy(t3)};
    if((lados_t1[0]/lados_t2[0] == lados_t1[1]/lados_t2[1]) && (lados_t1[1]/lados_t2[1] == lados_t1[2]/lados_t2[2]) && (lados_t1[2]/lados_t2[2] == lados_t1[0]/lados_t2[0])){
        return true;
    } else{
        return false;
    }
}

struct retangulo{
    point r1, r2, r3, r4;
    float perimetro();
    float area();
    bool quadrado();
};

float retangulo::perimetro(){
    return(r1.distancy(r2) + r2.distancy(r3) + r3.distancy(r4) + r4.distancy(r1));
}

float retangulo::area(){
    return (r1.distancy(r2) * r2.distancy(r3));
}

bool retangulo::quadrado(){
    if(r1.distancy(r2) == r2.distancy(r3) == r3.distancy(r4) == r3.distancy(r1)){
        return true;
    } else{
        return false;
    }
}

struct circunferencia{
    point c;
    int raio;
    float perimetro();
    float area();
    bool contem(point& p);
    bool contem(triangulo& p);
    bool contem(retangulo& r);
    bool pertence(point& p);
    bool circunscrita(triangulo& t);
    bool circunscrita(retangulo& r);
};

float circunferencia::perimetro(){
    return 2*M_PI*raio;
}

float circunferencia::area(){
    return M_PI*(raio*raio);
}

bool circunferencia::contem(point& p){
    if((this->c.distancy(p)) <= raio){
        return true;    
    } else {
        return false;
    }
}

bool circunferencia::contem(triangulo& p){
    if((this->contem(p.t1)) && this->contem(p.t2) && this->contem(p.t3)){
        return true;    
    } else {
        return false;
    }
}

bool circunferencia::contem(retangulo& r){
    if((this->contem(r.r1)) && this->contem(r.r2) && this->contem(r.r3) && this->contem(r.r4)){
        return true;    
    } else {
        return false;
    }
}

bool circunferencia::pertence(point& p){
    if(this->c.distancy(p) == raio){
        return true;
    } else{
        return false;
    }
}

bool circunferencia::circunscrita(triangulo& t){
    if((this->pertence(t.t1)) && (this->pertence(t.t2)) && (this->pertence(t.t3))){
        return true;
    } else {
        return false;
    }
}

bool circunferencia::circunscrita(retangulo& r){
    if((this->pertence(r.r1)) && (this->pertence(r.r2)) && (this->pertence(r.r3)) && (this->pertence(r.r4))){
        return true;
    } else {
        return false;
    }
}

int main(){
    
    point p1, p2;
    p1.atribuir(1, 2);
    p2.atribuir(3, 4);

    triangulo tri1, tri2;
    tri1.t1.atribuir(4, 8);
    tri1.t2.atribuir(8, 16);
    tri1.t3.atribuir(4, 16);
    tri2.t1.atribuir(8, 16);
    tri2.t2.atribuir(16, 32);
    tri2.t3.atribuir(8, 32);

    retangulo ret1, ret2;
    ret1.r1.atribuir(5, 5);
    ret1.r1.atribuir(5, 10);
    ret1.r3.atribuir(10, 5);
    ret1.r4.atribuir(10, 10);

    ret2.r1.atribuir(10, 10);
    ret2.r1.atribuir(10, 20);
    ret2.r3.atribuir(20, 10);
    ret2.r4.atribuir(20, 20);

    circunferencia c1;
    c1.c.atribuir(10, 10);
    c1.raio = 10;
        
    printf("\n A ditância entre o ponto 1 e 2 é: %d\n", p1.distancy(p2));

    printf(" O perímetro do triângulo é: %d\n", tri1.perimetro());
    printf(" A área desse triãngulo é: %d\n", tri1.area());
    printf(" Esse triangulo é equilátero: %d\n", tri1.equilatero());
    printf(" Esse triangulo e o segundo são semelhantes: %d\n", tri1.semelhante(tri2));

    printf(" O perímetro do retangulo é: %d\n", ret1.perimetro());
    printf(" A área do retangulo é: %d\n", ret1.area());
    printf(" Esse retangulo é um quadrado: %d\n", ret1.quadrado());

    printf(" O perímetro dessa circunferencia é: %d\n", c1.perimetro());
    printf(" A área da circunferencia é: %d\n", c1.area());
    printf(" Essa circunferencia contem o ponto p: %d\n", c1.contem(p2));
    printf(" Essa circunferencia contem o triangulo p: %d\n", c1.contem(tri2));
    printf(" Essa circunferencia contem o retangulo r: %d\n", c1.contem(ret2));

    printf(" O ponto p pertence a essa circunferencia: %d\n", c1.pertence(p2));

    printf(" Essa circunferencia é circunscrita ao triangulo t: %d\n", c1.contem(tri2));
    printf(" Essa circunferencia é circunscrita ao retangulo r: %d\n", c1.contem(ret2));

    return 0;
}