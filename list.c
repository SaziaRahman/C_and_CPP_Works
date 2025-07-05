#include <stdio.h>
#include <stdlib.h>

int takeListSize(int a);

int main(void)
{
    int n, m;
    n = takeListSize(n);
    int *list1 = (int*) malloc(n * sizeof(int));

    if(list1 == NULL)
    {
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        list1[i]=i+1;
        printf("The number is: %i\n", list1[i]);
    }

    m = takeListSize(m);
    /*int *tmp = (int*) malloc(m * sizeof(int));
    if(tmp == NULL)
    {
        free(list1);
        return 1;
    }

    for(int i=0; i<m; i++)
    {
        if(i>=n-1)
        {
        tmp[i] = i+1;
        printf("The number is: %i\n", list1[i]);
        }
        else
        {
        tmp[i] = list1[i];
        printf("The number is: %i\n", list1[i]);
        }
    }

    free(list1);
    list1 = tmp;
    */

    //=============================
    int *tmp = (int*) realloc(list1, m * sizeof(int));
    if(tmp == NULL)
    {
        free(list1);
        return 1;
    }

    list1 = tmp;
    for(int i=0; i<m; i++)
    {
        if(i>=n)
        {
        tmp[i] = i+1;
        printf("The number is: %i\n", list1[i]);
        }
        else
        {
          printf("The number is: %i\n", list1[i]);  
        }
    }
    //=============================

    free(list1);
    return 0;
}

int takeListSize(int a)
{
    printf("Enter Stack Size:");
    scanf("%i", &a);
    return a;
}