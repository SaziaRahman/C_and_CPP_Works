#include <stdio.h>
#include <stdlib.h>

int takeStakeSize(int a);

int main(void)
{
    int n, m;
    n = takeStakeSize(n);
    int *stack1 = (int*) malloc(n * sizeof(int));

    if(stack1 == NULL)
    {
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        stack1[i]=i+1;
        printf("The number is: %i\n", stack1[i]);
    }

    m = takeStakeSize(m);
    /*int *tmp = (int*) malloc(m * sizeof(int));
    if(tmp == NULL)
    {
        free(stack1);
        return 1;
    }

    for(int i=0; i<m; i++)
    {
        if(i>=n-1)
        {
        tmp[i] = i+1;
        printf("The number is: %i\n", stack1[i]);
        }
        else
        {
        tmp[i] = stack1[i];
        printf("The number is: %i\n", stack1[i]);
        }
    }

    free(stack1);
    stack1 = tmp;
    */

    //=============================
    int *tmp = (int*) realloc(stack1, m * sizeof(int));
    if(tmp == NULL)
    {
        free(stack1);
        return 1;
    }

    stack1 = tmp;
    for(int i=0; i<m; i++)
    {
        if(i>=n)
        {
        tmp[i] = i+1;
        printf("The number is: %i\n", stack1[i]);
        }
        else
        {
          printf("The number is: %i\n", stack1[i]);  
        }
    }
    //=============================

    free(stack1);
    return 0;
}

int takeStakeSize(int a)
{
    printf("Enter Stack Size:");
    scanf("%i", &a);
    return a;
}