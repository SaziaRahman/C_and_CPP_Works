#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    struct node *letter1[15][26];
    char name[15];
}
node;

int main()
{
    node *list = NULL;
    char *comp[3]; 
    int num[3], m;
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char beta[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    comp[0] = (char *) malloc(15);
    comp[1] = (char *) malloc(15);
    comp[2] = (char *) malloc(15);
    
    printf("Write 1st Phone Number: \n");
    scanf("%i", &num[0]);
    printf("Write 1st Name: \n");
    scanf("%s", comp[0]);
    printf("Write 2nd Phone Number: \n");
    scanf("%i", &num[1]);
    printf("Write 2nd Name: \n");
    scanf("%s", comp[1]);
    printf("Write 3rd Phone Number: \n");
    scanf("%i", &num[2]);
    printf("Write 3rd Name: \n");
    scanf("%s", comp[2]);

    
    for(int j = 0; j<3; j++)
    {
        int k = 0;
        node *p = (node*) malloc(sizeof(node));
        if (p == NULL)
        {
            return 1;
        }

        p->number = num[j];
        int r = 0;
        while (comp[j][r]!= '\0')
        {
            p->name[r] = comp[j][r];
            r++;
            k++;
        }

        int t = 0;
        while (t<k)
        {
            for(int i = 0; i<26; i++){
                if(p->name[t] == alpha[i] || p->name[t] == beta[i])
                {
                    p->letter1[t][i] = p;
                    m = i;
                    break;
                }
            }
            t++;
        }

        if(j == 2)
        {
        p->letter1[t-1][m] = NULL;
        }
        p->letter1[t-1][m] = list;
        list = p;
    }

    node *ptr = list;
    int n = 0;
    while(ptr!=NULL)
    {
        m = 0;
        printf("\n--------Your Name [%i]-------\n", n+1);
        int w = 0, k = 0;
        while (comp[n][w] != '\0')
        {
            printf("%c", ptr->name[w]);
            w++;
            k++;
        }

        printf("\n--------Your Phone Number [%i]-------\n", n+1);
        printf("%i\n", ptr->number);
        for(int g = 0; g<k; g++)
        {
            for(int i = 0; i<26; i++)
            {
                if(ptr->name[g] == alpha[i] || ptr->name[g] == beta[i])
                {
                    ptr = ptr->letter1[g][i];
                    m = i;
                    break;
                }
            }
        }
        n++;
        if(n == 3)
        {
            ptr = NULL;
            break;
        }
    }
    
    ptr = list;
    free(comp[0]);
    free(comp[1]);
    free(comp[2]);
    free(ptr);
}