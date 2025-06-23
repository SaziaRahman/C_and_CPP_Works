#include <iostream>

using namespace std;

int main(void)
{
    string t1, t2;
    printf("Type 1st person's name:");
    scanf("%s", t1);
    printf("Type 2nd person's name:");
    scanf("%s", t2);
    if (t1 == t2)
    {
        printf("Hello, %s\n", t1);
    }
    else
    {
        printf("Hello, world\n");
    }
    return 0;
}