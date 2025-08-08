#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char *number;
    struct node *letter1[3][26];
    char name[15];
}
node;

int main()
{
    node *list = NULL;
    char *comp[3]; 
    char *num[3], m;
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char beta[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    num[0] = (char *) malloc(15);
    num[1] = (char *) malloc(15);
    num[2] = (char *) malloc(15);
    comp[0] = (char *) malloc(15);
    comp[1] = (char *) malloc(15);
    comp[2] = (char *) malloc(15);
    
    printf("Write 1st Phone Number: \n");
    scanf("%s", num[0]);
    printf("Write 1st Name: \n");
    scanf("%s", comp[0]);
    printf("Write 2nd Phone Number: \n");
    scanf("%s", num[1]);
    printf("Write 2nd Name: \n");
    scanf("%s", comp[1]);
    printf("Write 3rd Phone Number: \n");
    scanf("%s", num[2]);
    printf("Write 3rd Name: \n");
    scanf("%s", comp[2]);

    printf("===============");
    
    for(int j = 0; j<3; j++)
    {
        int k = 0;
        node *p = (node*) malloc(sizeof(node));
        if (p == NULL)
        {
            return 1;
        }

        int f = 0;
        while (num[j][f]!= '\0')
        {
            p->name[f] = num[j][f];
            f++;
        }

        p->number = num[j];
        int r = 0;
        while (comp[j][r]!= '\0')
        {
            p->name[r] = comp[j][r];
            r++;
            k++;
        }
        int g = 0, t = 0;
        while(g<k)
            {
                for(int i = 0; i<26; i++){
                    if(p->name[g] == alpha[i] || p->name[g] == beta[i])
                    {
                        p->letter1[j][i] = p;
                        printf("===%i===%i===", j, i);
                        m = i;
                        g++;
                        break;
                    }
                }
            }
           

        if(j == 2)
        {
        p->letter1[j][m] = NULL;
        }
        p->letter1[j][m] = list;
        list = p;
    }

    node *ptr = list;
    int n = 2, index = 0;
    while(ptr!=NULL)
    {
        m = 0;
        index++;
        node *temp = (node*) malloc(sizeof(node));
        printf("\n--------Your Name [%i]-------\n", index);
        int k = 0;
        
        for(int w = 0; w<strlen(comp[n]); w++)
        {
            printf("%c", ptr->name[w]);
            k++;
        }

        printf("\n--------Your Phone Number [%i]-------\n", index);
        printf("%s\n", ptr->number);
        int g = k-1;
        
        while (g>=0)
        {
            for(int i = 0; i<26; i++)
                {
                    //printf("///===%c===%i===", ptr->name[g], i);
                    if(ptr->name[g] == alpha[i] || ptr->name[g] == beta[i])
                    {
                        if(g == k-1)
                        {
                            temp = ptr->letter1[n][i];
                            printf("///===%i===%i===", n, i);
                        }
                        break;
                    }
                }
            g--;
        }
        ptr = temp;
        n--;
        if(n == -1)
        {
        
            break;
        }
    }
    
    ptr = list;
    
    free(num[0]);
    free(num[1]);
    free(num[2]);
    free(comp[0]);
    free(comp[1]);
    free(comp[2]);
    free(ptr);
}
