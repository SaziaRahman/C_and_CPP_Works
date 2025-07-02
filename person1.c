#include <stdio.h>
typedef char *string;

bool compare(string *a, string *b)
{
    string a1 = *a, b1 = *b;
    if(a1!=b1)
    {
        return false;
    }
    return true;
}

int main(void)
{
    string t1, t2;
    printf("Type 1st person's name:");
    scanf("%s", &t1);
    printf("Type 2nd person's name:");
    scanf("%s", &t2);
    if (compare(&t1, &t2))
    {
        printf("Hello, %s\n", &t1);
    }
    else
    {
        printf("Hello, world\n");
    }
    return 0;
}