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
    node *temp = (node*) malloc(sizeof(node));
    node *list1 = NULL;
    int comp, samp[10];
    char charecter;
    if (argc > 1)
    {
        charecter = *argv[1];
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
        }
    else
    {
        node *s = (node*) malloc(sizeof(node));
        for(int i = 0; i < 10; i++)
        {
            scanf("%i", &comp);
            samp[i] = comp;
        }

        int min = samp[0];
        for(int i = 0; i < 10; i++)
        {
            for(int j = i; j<10; j++)
            {
                if(samp[j+1] < samp[j])
                {
                    min = samp[j+1];
                    samp[j+1] = samp[j];
                    samp[j] = min;
                }
            }
        }

        for(int i = 0; i < 10; i++)
        {
            node *p = (node*) malloc(sizeof(node));
            if (p == NULL)
            {
                return 1;
            }
            p->number = samp[i];
            p->next = NULL;
            if(list1 == NULL)
            {
                list1 = p;
                s = list1;
            }
            else
            {
                s->next = p;
                if (s->next != NULL)
                {
                    s = s->next;
                }
            
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

    printf("\n----------0----------");

    ptr = list1;
    while (ptr!=NULL)
    {
        node *k = ptr->next;
        free(ptr);
        ptr = k; 
    }

}