#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
typedef char *string;

string copystring(string d, string s)
{
    for(int i=0, n = strlen(s) + 1; i < n; i++)
    {
        d[i] = s[i];
    }
}

int main(void)
{
    string t1, t2;
    printf("Type 1st string:");
    scanf("%s", t1);

    int n = strlen(t1);
    t2 = (string) malloc(n+1);

    copystring(t2, t1);

    if(n > 0)
    {
    t2[0] = toupper(t2[0]);
    }
    printf("Hello, %s\n", t1);
    printf("Hello, %s\n", t2);

    free(t2);
    return 0;
}