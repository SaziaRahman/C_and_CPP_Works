#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    struct node *letter1[27];
    char name[15];
}
node;

int main()
{
    //node *temp = (node*) malloc(sizeof(node));
    node *list = NULL;
    int num[3], m;
    char *comp[3];
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

    //printf("%c", comp[1][1]);
    for(int j = 0; j<3; j++)
    {
    node *p = (node*) malloc(sizeof(node));
    if (p == NULL)
    {
        return 1;
    }

    p->number = num[j];
    int r=0;
    while (comp[j][r]!= '\0')
    {
        p->name[r] = comp[j][r];
        printf("%c", p->name[r]);
        r++;
    }
    
    for(int i = 0; i<15; i++)
    {
        if(p->name[i] == 'A' || p->name[i] == 'a')
        {
            p->letter1[0] = p;
            m = 0;
        }
        else if (p->name[i] == 'B' || p->name[i] == 'b')
        {
            p->letter1[1]  = p;
            m = 1;
        }
        else if (p->name[i] == 'C' || p->name[i] == 'c')
        {
            p->letter1[2]  = p;
            m = 2;
        }
        else if (p->name[i] == 'D' || p->name[i] == 'd')
        {
            p->letter1[3]  = p;
            m = 3;
        }
        else if (p->name[i] == 'E' || p->name[i] == 'e')
        {
            p->letter1[4]  = p;
            m = 4;
        }
        else if (p->name[i] == 'F' || p->name[i] == 'f')
        {
            p->letter1[5]  = p;
            m = 5;
        }
        else if (p->name[i] == 'G' || p->name[i] == 'g')
        {
            p->letter1[6]  = p;
            m = 6;
        }
        else if (p->name[i] == 'H' || p->name[i] == 'h')
        {
            p->letter1[7]  = p;
            m = 7;
        }
        else if (p->name[i] == 'I' || p->name[i] == 'i')
        {
            p->letter1[8]  = p;
            m = 8;
        }
        else if (p->name[i] == 'J' || p->name[i] == 'j')
        {
            p->letter1[9]  = p;
            m = 9;
        }
        else if (p->name[i] == 'K' || p->name[i] == 'k')
        {
            p->letter1[10]  = p;
            m = 10;
        }
        else if (p->name[i] == 'L' || p->name[i] == 'l')
        {
            p->letter1[11]  = p;
            m = 11;
        }
        else if (p->name[i] == 'M' || p->name[i] == 'm')
        {
            p->letter1[12]  = p;
            m = 12;
        }
        else if (p->name[i] == 'N' || p->name[i] == 'n')
        {
            p->letter1[13]  = p;
            m = 13;
        }
        else if (p->name[i] == 'O' || p->name[i] == 'o')
        {
            p->letter1[14]  = p;
            m = 14;
        }
        else if (p->name[i] == 'P' || p->name[i] == 'p')
        {
            p->letter1[15]  = p;
            m = 15;
        }
        else if (p->name[i] == 'Q' || p->name[i] == 'q')
        {
            p->letter1[16]  = p;
            m = 16;
        }
        else if (p->name[i] == 'R' || p->name[i] == 'r')
        {
            p->letter1[17]  = p;
            m = 17;
        }
        else if (p->name[i] == 'S' || p->name[i] == 's')
        {
            p->letter1[18]  = p;
            m = 18;   
        }
        else if (p->name[i] == 'T' || p->name[i] == 't')
        {
            p->letter1[19]  = p;
            m = 19;
        }
        else if (p->name[i] == 'U' || p->name[i] == 'u')
        {
            p->letter1[20]  = p;
            m = 20;
        }
        else if (p->name[i] == 'V' || p->name[i] == 'v')
        {
            p->letter1[21]  = p;
            m = 21;
        }
        else if (p->name[i] == 'W' || p->name[i] == 'w')
        {
            p->letter1[22]  = p;
            m = 22;
        }
        else if (p->name[i] == 'X' || p->name[i] == 'x')
        {
            p->letter1[23]  = p;
            m = 23;
        }
        else if (p->name[i] == 'Y' || p->name[i] == 'y')
        {
            p->letter1[24]  = p;
            m = 24;
        }
        else if (p->name[i] == 'Z' || p->name[i] == 'z')
        {
            p->letter1[25]  = p;
            m = 25;
        }
        else if(comp[j][i] == '\0')
        {
            if(j == 2)
            {
                p->letter1[26] = NULL;
            }
            else
            {
                p->letter1[26] = p;
            }
            p->letter1[m] = p->letter1[26];
            p->letter1[m] = list;
            list = p;
            printf("\nbbbbbbbbbbbbbbbbbb%ibbbbbbbbbbbbbbbbbbb\n",list->number);
            for(int l = 0; l<strlen(comp[j]); l++)
            {
                printf("%c", list->name[l]);
            }
            printf("\n");
            p = NULL;
            break;
        }
        
    }
    free(p);
    }

    node *ptr = list;
    int n = 0;
    while(ptr!=NULL){
    printf("\n--------Your Name [%i]-------\n", n);
    for(int w = 0; w<strlen(comp[n]); w++)
    {
        printf("%c", ptr->name[w]);
    }

    printf("\n--------Your Phone Number [%i]-------\n", n);
    printf("%i\n", ptr->number);

    for(int i = 0; i<strlen(comp[n]); i++)
    {
        if(comp[n][i] == '\0')
        {
            ptr = ptr->letter1[26];
            break;
        }
        else if(ptr->name[i] == 'A' || ptr->name[i] == 'a')
        {
            ptr = ptr->letter1[0];
            printf("======A======");
        }
        else if (ptr->name[i] == 'B' || ptr->name[i] == 'b')
        {
            ptr = ptr->letter1[1];
        }
        else if (ptr->name[i] == 'C' || ptr->name[i] == 'c')
        {
            ptr = ptr->letter1[2];
        }
        else if (ptr->name[i] == 'D' || ptr->name[i] == 'd')
        {
            ptr = ptr->letter1[3];
        }
        else if (ptr->name[i] == 'E' || ptr->name[i] == 'e')
        {
            ptr = ptr->letter1[4];
        }
        else if (ptr->name[i] == 'F' || ptr->name[i] == 'f')
        {
            ptr = ptr->letter1[5];
        }
        else if (ptr->name[i] == 'G' || ptr->name[i] == 'g')
        {
            ptr = ptr->letter1[6];
        }
        else if (ptr->name[i] == 'H' || ptr->name[i] == 'h')
        {
            ptr = ptr->letter1[7];
        }
        else if (ptr->name[i] == 'I' || ptr->name[i] == 'i')
        {
            ptr = ptr->letter1[8];
            printf("=======I======");
        }
        else if (ptr->name[i] == 'J' || ptr->name[i] == 'j')
        {
            ptr = ptr->letter1[9];
        }
        else if (ptr->name[i] == 'K' || ptr->name[i] == 'k')
        {
            ptr = ptr->letter1[10];
        }
        else if (ptr->name[i] == 'L' || ptr->name[i] == 'l')
        {
            ptr = ptr->letter1[11];
        }
        else if (ptr->name[i] == 'M' || ptr->name[i] == 'm')
        {
            ptr = ptr->letter1[12];
        }
        else if (ptr->name[i] == 'N' || ptr->name[i] == 'n')
        {
            ptr = ptr->letter1[13];
        }
        else if (ptr->name[i] == 'O' || ptr->name[i] == 'o')
        {
            ptr = ptr->letter1[14];
        }
        else if (ptr->name[i] == 'P' || ptr->name[i] == 'p')
        {
            ptr = ptr->letter1[15];
        }
        else if (ptr->name[i] == 'Q' || ptr->name[i] == 'q')
        {
            ptr = ptr->letter1[16];
        }
        else if (ptr->name[i] == 'R' || ptr->name[i] == 'r')
        {
            ptr = ptr->letter1[17];
        }
        else if (ptr->name[i] == 'S' || ptr->name[i] == 's')
        {
            ptr = ptr->letter1[18];
            printf("=======S======");
        }
        else if (ptr->name[i] == 'T' || ptr->name[i] == 't')
        {
            ptr = ptr->letter1[19];
        }
        else if (ptr->name[i] == 'U' || ptr->name[i] == 'u')
        {
            ptr = ptr->letter1[20];
        }
        else if (ptr->name[i] == 'V' || ptr->name[i] == 'v')
        {
            ptr = ptr->letter1[21];
        }
        else if (ptr->name[i] == 'W' || ptr->name[i] == 'w')
        {
            ptr = ptr->letter1[22];
        }
        else if (ptr->name[i] == 'X' || ptr->name[i] == 'x')
        {
            ptr = ptr->letter1[23];
        }
        else if (ptr->name[i] == 'Y' || ptr->name[i] == 'y')
        {
            ptr = ptr->letter1[24];
        }
        else if (ptr->name[i] == 'Z' || ptr->name[i] == 'z')
        {
            ptr = ptr->letter1[25];
            printf("=======Z======");
        }
    }
    n++;
    }

    ptr = list;
    free(comp[0]);
    free(comp[1]);
    free(comp[2]);
    free(ptr);
}