#include <stdio.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <ctime>
#define n 5
#define m 5


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int  j, i, b[n][m] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            b[i][j] = rand() % 21 - 10;

        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    int arr = b[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            if (arr < b[i][j]) {
                arr = b[i][j];
            }
            else {
                continue;
            }

        }
    }
    printf(" max = %d\n", arr);
    int min = b[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            if (min > b[i][j]) {
                min = b[i][j];
            }
            else {
                continue;
            }

        }
    }
    printf(" min = %d\n", min);

    float sred = 0, sum = 0;
    int k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            sum = sum + b[i][j];
            k++;
        }
    }

    sred = sum / k;
    printf(" Середнє арифметичне = %.1f\n", sred);

    int dob1 = 1, dob2, c;
    j = 0;
    dob1 = b[0][0];
    for (i = 0; i < n - 1; i++)
    {
        dob1 = dob1 * b[i + 1][j + 1];
        j++;

    }

    printf(" Добуток по головній діагоналі = %d\n", dob1);

    int sumd = 0;
    j = 0;
    sumd = b[0][0];
    for (i = 0; i < n - 1; i++)
    {
        sumd = sumd + b[i + 1][j + 1];
        j++;

    }

    printf(" Сума по головній діагоналі = %d\n", sumd);

    int sump = 0;
    j = 0;
    sump = 0;
    for (i = 0; i < n - 1; i++)
    {
        sump = sump + b[i + 1][j];

        j++;

    }

    printf(" Сума діагоналі під головною = %d\n", sump);

}




