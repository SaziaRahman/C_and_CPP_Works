#include <stdio.h>
#include <conio.h>

int count = 0, ct = 0;

int printNumbers(int a[], int n)
{
   for(int k = 0; k < n; k++)
    {
        printf("%i", a[k]);
    } 
}

int selectionSort(int a[],int n,int min,int m, int step)
{
    
    for (int j = 0;j < n; j++)
    {
        min = a[j];
        
        for (int i = j;i < n; i++)
        {
            printf("\n Steps of selection sort - %i: ", step);
            printNumbers(a, n);
            printf("\n");
            step += 1;
            if(min > a[i])
            {
            min = a[i];
            m = i;
            a[m] = a[j];
            a[j] = min;
            }
        }
    }
}

int recursiveSelectionSort(int a[],int n, int t,int min,int m, int step)
{
    printf("\n Steps of recusive-selection sort - %i: ", step);
    printNumbers(a, n);
    printf("\n");
    step += 1;
    for (int j = 0;j < n; j++)
    {
        min = a[j];
        
        for (int i = j;i < n; i++)
        {
            t -= 1;
            if(a[j] > a[i])
            {
            min = a[i];
            m = i;
            a[m] = a[j];
            a[j] = min;
            recursiveSelectionSort(a, n, t, min, m, step);
            }
        }
    }
}

int bubbleSort(int a[], int n, int max, int st)
{
    for (int i = n-1; i> 0; i--)
    {
    for (int j = n-1;j > 0; j--)
    {
        printf("\n Step for bubble sort - %i: ", count);
        printNumbers(a, n);
        printf("\n");
        count += 1;
        if (a[j] >= a[j-1] && j!=n)
        {
            max = a[j];
        } 
        else
        {
           max = a[j - 1];
           a[j-1]= a[j];
           a[j] = max;
        }
    }
    }
    return 0;
}

int recursiveBubbleSort(int a[], int n, int max, int t)
{
    printf("\n Step for recursive-bubble sort - %i: ", ct);
    printNumbers(a, n);
    printf("\n");
    ct += 1;
    for (int j = t;j > 0; j--)
    {
        t -= 1;
        if (a[j] >= a[j-1] && j!=n)
        {
            max = a[j];
        } 
        else
        {
           max = a[j - 1];
           a[j-1]= a[j];
           a[j] = max;
           recursiveBubbleSort(a, n, max, t);
        }
    }
    return 0;
}

int main(void)
{
    int array1[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int array2[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int array3[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int array4[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int n = sizeof(array1)/sizeof(array1[0]);
    int min, m, max = array2[n-1], t1 = n, t2 = n;
    printf("before:\n");
    printNumbers(array1, n);
    selectionSort(array1, n, min, m, count);
    printf("\nafter selection sort:\n");
    printNumbers(array1, n);
    printf("\n");
    bubbleSort(array2, n, max, count);
    printf("\nafter bubble sort:\n");
    printNumbers(array2, n);
    printf("\n");
    recursiveSelectionSort(array3, n, t1, min, m, ct);
    printf("\nafter recursive-selection sort:\n");
    printNumbers(array3, n);
    printf("\n");
    recursiveBubbleSort(array4, n, max, t2);
    printf("\nafter recursive-bubble sort:\n");
    printNumbers(array4, n);
    printf("\n");

}