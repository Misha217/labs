#include "labs.h"

void lab_1() {

    double h, t, v0, G;
    G = 9.81;
        printf("Введите высоту h (в метрах): ");
    scanf("%lf", &h);
    printf("Введите время t (в секундах): ");
    scanf("%lf", &t);
    // Вычисление начальной скорости
    v0 = (h - 0.5 * G * t * t) / t;
    printf("Начальная скорость шарика: %.2f м/с\n\n", v0);

}

float foo1(float H, float T) {
    float v;
    v = (H / T) - (0.5 * g * T);
    return v;
}

void lab_1_1() {

    float v0, h, t;
    printf("Введите высоту (в метрах)\n");
    scanf("%f", &h);
    printf("Введите время (в секундах)\n");
    scanf("%f", &t);
    v0 = foo1(h, t);
    printf("\n Скорость v0 = %.2f\n\n", v0);

}

void lab_2() {

    float s; // сумма ряда
    float a; // очередной элемент ряда
    float x; //входной параметр ряда
    float b; // знаменатель
    int c; // числитель
    int n;  //число элементов ряда
    int i; // номер очередного элемента

    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%f", &x);

    s = 0;
    i = 1;

    while (i <= n)
    {
        c = i;
        b = x * i;
        a = c / b;
        i = i + 1;
        s = s + a;
    }

    printf("n = %d, s = %f\n\n", n, s);

}

void lab_2_1() {

    float s; // сумма ряда
    float a; // очередной элемент ряда
    float x; //входной параметр ряда
    float b; // знаменатель
    int c; // числитель
    int n;  //число элементов ряда
    int i; // номер очередного элемента

    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%f", &x);

    s = 0;
    i = 1;


    for (i = 1; i <= n; i++)
    {
        c = i;
        b = x * i;
        a = c / b;
        s = s + a;
    }

    printf("n = %d, s = %f\n\n", n, s);

}

void lab_3() {

    int count = 0; //счетчик
    char line; //строка с символами
    int flag = 0; //флаг проверки позиции внутри строки символов
    int length = 0; //длина текущего слова
    printf("Введите слова \n");
    while ((line = getchar()) != '\n')
    {
        if (line != ' ')
        {
            length++;
            flag = 1;
        }
        else
        {
            if ((flag) && (length % 2 == 1))
            {
                count++;
            }
            length = 0;
            flag = 0;
        }
    }
    if ((flag) && (length % 2 == 1)) {
        count++;
    }
    printf("Count = %d\n\n", count);

}

void lab_4() {
    printf("ЛАБА №4 ЕЩЁ НЕ ГОТОВА\n\n");
}

void lab_5() {
    printf("ЛАБА №5 ЕЩЁ НЕ ГОТОВА\n\n");
}

void lab_6() {
    printf("ЛАБА №6 ЕЩЁ НЕ ГОТОВА\n\n");
}