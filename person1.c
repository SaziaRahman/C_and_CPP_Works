#include <stdio.h>
typedef char *string;

bool compare(char *a, char *b)
{
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<n; i++)
    {
    if (a[i] != b[i])
        return false;
    }
    return true;
}


int main(void)
{
    char t1[100], t2[100];
    printf("Type 1st person's name:");
    scanf("%s", t1);
    printf("Type 2nd person's name:");
    scanf("%s", t2);
    
    if (compare(t1, t2))
    {
        printf("Hello, %s\n", t1);
    }
    else
    {
        printf("Hello, world\n");
    }
    return 0;
}