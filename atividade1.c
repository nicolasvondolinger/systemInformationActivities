#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char name[]= "Nicolas";
    float a;
    float b;
    float c;
    float d;
    float delta = pow(a, 2) - ((4*a)*c);
    float raiz1 = ((-b) + sqrt(delta))/2*a;
    float raiz2 = ((-b) - sqrt(delta))/2*a;

    //Na declaração você pode trocar de float para double ou de double para float

    printf("    Eu sou %s e essa é a minha resolução da lista de exercícios de Algoritmos e Estruturas de Dados I\n\n", name);
    
    printf("1 - a) 3+4 = %d\n", 3+4);
    printf("    b) 7/4 = %d\n", 7/4);
    printf("    c) 3² = %f\n", pow(3, 2));
    printf("    d) 5.3 * 2.1 = %f\n", 5.3 * 2.1);
    printf("    e) 2 * 5 - 2 = %d\n", 2*5-2);
    printf("    f) 2+2*5 = %d\n", 2+2*5);
    printf("    g) (2 + 5) * 3 = %d\n", (2 + 5) * 3);
    printf("    h) sin(3.141502) = %f\n", sin(3.141502));
    printf("    i) sqrt(5) = %f\n", sqrt(5));
    printf("    j) 1 + 2 + 3 = %d\n", 1 + 2 + 3);
    printf("    k) 1 * 2 * 3 = %d\n", 1 * 2 * 3);
    printf("    l) (1 + 2 + 3) / 3 = %d\n", (1 + 2 + 3) / 3);
    printf("    m) (2 + 4) * (3 - 1) = %d\n", (2 + 4) * (3 - 1));
    printf("    n) (9 / 3) + (3 * 2) = %d\n", (9 / 3) + (3 * 2));
    printf("    o) sin(4.5) + cos(3.7) = %f\n", sin(4.5) + cos(3.7));
    printf("    p) log(2.3) - log(3.1) = %f\n", log(2.3) - log(3.1));
    printf("    q) log(7) + (log(7) * log(7) - cos(log(7))) = %f\n", log(7) + (log(7) * log(7) - cos(log(7))));
    printf("    r) (10.3 + 8.4)/50.3 - (10.3 + 8.4) = %f\n", (10.3 + 8.4)/50.3 - (10.3 + 8.4));
    printf("    s) (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) = %f\n", (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)));

    printf("    ______________________________________________________________________\n\n");

    printf("    Dados coletados para os exercícios 2 e 3\n\n");

    printf("    Digite o valor da variável a: ");
    scanf("%f", &a);
    printf("    Digite o valor da variável b: ");
    scanf("%f", &b);
    printf("    Digite o valor da variável c: ");
    scanf("%f", &c);
    printf("    Digite o valor da variável d: ");
    scanf("%f", &d);

    printf("2 - a) a + b = %f\n", a+b);
    printf("    b) a/c = %f\n", a/c);
    printf("    c) a² = %f\n", pow(a, 2));
    printf("    d) b * c = %f\n", b*c);
    printf("    e) a * b - c = %f\n", a*b-c);
    printf("    f) a + b * c = %f\n", a+b*c);
    printf("    g) (a + b) * c = %f\n", (a+b)*c);
    printf("    h) sin(a) = %f\n", sin(a));
    printf("    i) sqrt(b) = %f\n", sqrt(b));
    printf("    j) a + b + c = %f\n", a+b+c);
    printf("    k) a * b * c = %f\n", a*b*c);
    printf("    l) (a + b + c) / d = %f\n", (a+b+c)/d);
    printf("    m) (a + b) * (a - d) = %f\n", (a+b)*(a-d));
    printf("    n) (b / c) * (a * d) = %f\n", (b/c)*(a*d));
    printf("    o) sin(b) + cos(c) = %f\n", sin(b)+cos(c));
    printf("    p) log(a) - log(c) = %f\n", log(a)-log(c));
    printf("    q) log(a) + (log(b) * log(d) - cos(log(c))) = %f\n", log(a)+(log(b)*log(d)-cos(log(c))));
    printf("    r) (b+a)/c-(d+a) = %f\n", (b+a)/c-(d+a));
    printf("    s) (cos(d) + sin(c)) * (cos(b) - sin(a)) = %f\n\n", (cos(d)+sin(c))*(cos(b)-sin(a)));

    printf("3 - a) Média: %lf\n", (a+b+c)/3);
    printf("    b) Média ponderada: %lf\n", (a*3+b*4+c*5)/3+4+5);
    printf("    c) Perímetro: %lf\n", 2 * 3.141516 * a);
    printf("    d) Área do Círculo: %lf\n", pow(a, 2)*3.141516);
    printf("    e) Área do triângulo: %lf\n", (b*c)/2);
    printf("    f) Hipotenusa: %lf\n", sqrt(pow(b, 2)+pow(c, 2)));
    printf("    g) Raízes: Primeira - %lf Segunda - %lf\n", raiz1, raiz2);

    //Aqui você pode trocar de %f para %lf e vice-versa, deu o mesmo resultado no meu

    return 0;
}