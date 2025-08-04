#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL, *temp = (node*) malloc(sizeof(node));
    node *list1 = NULL;
    char charecter;
    if (argc > 1)
    {
        charecter = *argv[1];
    }
    else
    {
        charecter = 1;
    }

    if(charecter == 'b')
    {
        for (int i=2; i < argc; i++)
        {
        int number = atoi(argv[i]);

        node *n = (node*) malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        
        n->number = number;
        n->next = NULL;

        n->next = list1;
        list1 = n;
        }
        
    }
    else
    {
    for (int i=1; i < argc; i++)
    {
        
        int number = atoi(argv[i]);

        node *n = (node*) malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        
        n->number = number;
        n->next = NULL;

        if(list1==NULL)
        {
            list1 = n;
            temp = list1;
        }
        else
        {
            temp->next = n;
            if (temp->next != NULL)
            {
                temp = temp->next;
            }
        }
        if (i == argc-1)
        {
            temp->next = NULL;
        }
    }
    }

    printf("=========%i=========\n", argc);

    node *ptr = list1;
    while(ptr!=NULL)
    {
        printf("The number is: %i\n", ptr->number);
        ptr= ptr->next;
    }

    printf("----------0----------");

    ptr = list1;
    while (ptr!=NULL)
    {
        node *k = ptr->next;
        free(ptr);
        ptr = k; 
    }

}