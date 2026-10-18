#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

int zadanie1();
int zadanie2();

int main()
{
    setlocale(LC_ALL, "RUS");
    zadanie1();
    zadanie2();
    return 0;
}

int zadanie1()
{
    float gr;

    printf("Введите значение для gr: ");
    scanf_s("%f", &gr);

    float rad = gr * M_PI / 180.0;

    printf("Значение %.2f градусов соответствует %.6f радиан\n", gr, rad);



    return 0;
}

int zadanie2() {

    double x, p = 2.6;
    double a, b, y;


    printf("Введите значение x: ");
    scanf_s("%lf", &x);


    a = pow(p, 3) + pow(x, 3);

    b = exp(sqrt(p + x));

    y = pow(b, 3) / pow(a, 2);

    printf("x = %e\n", x);
    printf("y = %.2f\n", y);
    // Задание3 
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("Целые части: A=%d, B=%d, C=%d\n", A, B, C);

    int uslovieA = (((A % 2) + (B % 2)) == 1);

    int uslovieB = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

    printf(" Только одно из A и B чётное: %d\n", uslovieA);
    printf(" Все A, B, C кратны трём: %d\n", uslovieB);













    return 0;




} 