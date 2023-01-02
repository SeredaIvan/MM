#include <stdio.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <ctime>
#define Sto 50


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int n, i, j;
    int arr[Sto][Sto] = { 0 };
    printf("n : "); scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    for (int i = -1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < 0) {
                printf("%4dj", j);
            }
            else {
                printf("%5d", arr[i][j]);
            }
        }
        if (i >= 0) {
            printf("%5di\n", i);
        }
        else {
            printf("\n");
        }

    }

    int max = arr[0][0], ij = 0;

    //визначаєм мах першого півтрикутника
    ij = n / 2-1 ;
    for (int j = n/2; j < n; j++)
    {
        for (int i = ij; i >=0; i--)
        {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            printf("\narr[%d][%d]=%d,max=%d", i, j, arr[i][j], max);
        }
        ij--;
    }
   
    printf("\nmax= %d", max);

    printf("\n");

    ij = n - 1;
    //визначаєм мах другого півтрикутника
    for (j = 0; j < n - 1; j++) {

        for (i = ij; i <= n - 1 && i >= n / 2; i--) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            printf("\narr[%d][%d]=%d,max=%d", i, j, arr[i][j], max);
        }
        ij--;
    }
    printf("\nmax= %d", max);


}

