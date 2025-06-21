#include <stdio.h>
#include <conio.h>

int count = 0;

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
            if(min > a[i])
            {
            min = a[i];
            m = i;
            a[m] = a[j];
            a[j] = min;
            }
            step++;
            printf("\n Steps of selection sort - %i: ", step);
            printNumbers(a, n);
            printf("\n");
        }
    }
}

int recursiveBubbleSort(int a[], int n, int max, int t, int st)
{
    printf("\n Step for recursive-bubble sort - %i: ", count);
    printNumbers(a, n);
    count += 1;
    for (int j = t;j > 0; j--)
    {
        t -= 1;
        if (a[j] <= a[j-1])
        {
            max = a[j - 1];
            a[j-1]= a[j];
            a[j] = max;
            recursiveBubbleSort(a, n, max, t, count);
        } 
    
    }
    return 0;
}
int main(void)
{
    int array1[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int array2[] = {7, 5, 1, 9, 2, 7, 1, 8, 6, 0};
    int n = sizeof(array1)/sizeof(array1[0]);
    int min, m, max = array2[n-1], t = n;
    printf("before:\n");
    printNumbers(array1, n);
    selectionSort(array1, n, min, m, count);
    printf("\nafter selection sort:\n");
    printNumbers(array1, n);
    recursiveBubbleSort(array2, n, max, t, count);
    printf("\nafter recursion-bubble sort:\n");
    printNumbers(array2, n);
    printf("\n");

}