#include <stdio.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <ctime>
#define N 10
#define M 10


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int k, r;
    do {
        printf("n : "); scanf_s("%d", &k);
        printf("m : "); scanf_s("%d", &r);
        if (k >= N || r >= M) {
            printf("Ви ввели завелике число ");
        }
    } while (k >= N || r >= M);
    const int n = k, m = r;
    int  j, i, arr[10][10] = { 0 }, a, b;
    do
    {
        printf("a : "); scanf_s("%d", &a);
        printf("b : "); scanf_s("%d", &b);
    } while (a > b);


    printf("n = %d\n", n);
    printf("m = %d\n", m);
    printf("a = %d\n", a);
    printf("b = %d\n", b);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            arr[i][j] = a + rand() % (b - a + 1);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    
    int sum_arr[N] = { 0 };
     k = 0;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++) {
            sum_arr[k] += arr[i][j];
        }
        k++;
    }
    
    int max_str = sum_arr[0];
    int fl = 0;

    for ( i = 0; i < k; i++)
    {
        if (abs(sum_arr[i]) > max_str) {
            max_str = abs(sum_arr[i]);
            fl = i;
        }
    }

    printf("Номер рядка : %i, максимальну за модулем сума елементів %i",fl, max_str);

   
}

