#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
    srand(time(NULL));
    int min = -2;
    int max = 7;

    int mas[100][100];

    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&m);
    }
    
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            mas[j][i] = min + rand()%(max - min + 1);
        }
    }
    
    printf("\nВведенный массив \n");
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%7i",mas[j][i]);
        }
        printf("\n");
    }
    
}

