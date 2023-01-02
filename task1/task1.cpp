#include <stdio.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <ctime>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int rows = 5, coll = 5;
    int n, j, i, arr[rows][coll] = { 0 };

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coll; j++) {
            arr[i][j] = 2 * i * j - i;
        }
    }


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coll; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }


    int sum = 0;
    printf("\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coll; j++) {
            if (i==4) {
                sum+=arr[i][j];
            }
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("summa = %i", sum);



}

