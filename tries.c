#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    //struct node *letter1[26];
    char name[15];
}
node;

int main()
{
    //node *temp = (node*) malloc(sizeof(node));
    node *list = NULL;
    int num;
    char *comp = (char *) malloc(15);
    
    printf("Write your Phone Number: \n");
    scanf("%i", &num);
    printf("Write your Name: \n");
    scanf("%s", comp);
    
    node *p = (node*) malloc(sizeof(node));
    if (p == NULL)
    {
        return 1;
    }

    p->number = num;
    for(int i = 0; i<strlen(comp); i++)
    {
        p->name[i] = comp[i];
    }

    if(list == NULL)
    {
        list = p;
    }

    printf("\n--------Your Name-------\n");
    node *ptr = list;
    for(int i = 0; i<strlen(comp); i++)
    {
        printf("%c", ptr->name[i]);
    }

    printf("\n--------Your Phone Number-------\n");
    printf("%i\n", ptr->number);
    ptr = list;
    free(comp);
    free(ptr);
}