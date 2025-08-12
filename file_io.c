#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char *string;

void removeSpaces(char *str,int i,int j);

int main(void)
{
    string option = (string) malloc(20);
    char line[1000];
    FILE *fileptr;
    while(true)
    {
    printf("Select a option:\n 1) Search\n 2) Add\n 3) Update\n 4) Exit\n");
    gets(option);
    
    if (strcmp(option, "Search") == 0)
    {
        fileptr = fopen("file_io.text", "r");
        if (fileptr == NULL) {
        perror("Error opening file");
        fileptr = fopen("file_io.text", "w");
        printf("File successfully created!\nWrite Something: ");
        gets(line);
        fputs(line, fileptr);
        fclose(fileptr);
        }
        else
        {
            printf("\nSearch Something: ");
            if (fileptr != NULL)
            {
                int c = 0;
                while(fgets(line, 1000, fileptr))
                {
                    char comp[1000];
                    if(c == 0)
                    {
                        gets(comp);
                        c++;
                    }
                    
                    string a = (string) malloc(1000), b = (string) malloc(1000);
                    for(int i = 0; i< strlen(comp); i++)
                    {
                        a[i] = comp[i];
                        b[i] = line[i];
                    }
                    removeSpaces(a, 0, 0);
                    removeSpaces(b, 0, 0);

                    if (strcmp(a, b) == 0)
                    {
                        printf("========================================");
                        printf("\n%s\n", line);
                        printf("========================================\n");
                        break;
                    }
                    else
                    {
                        continue;
                    }
                    free(a);
                    free(b);
                }
            }
            else
            {
                printf("\n");
            }
            
        }

        fclose(fileptr); 
    }
    else if (strcmp(option, "Add") == 0)
    {
        fileptr = fopen("file_io.text", "a");
        printf("\nWrite Something: ");
        gets(line);
        fputs("\n", fileptr);
        fputs(line, fileptr);
        fclose(fileptr);
        printf("Added Successfully!\n");
    }
    else if (strcmp(option, "Update") == 0)
    {
        printf("Update!\n");
    }
    else if((strcmp(option, "Exit") == 0) || (strcmp(option, "exit") == 0))
    {
        printf("=======Exit=======\n");
        break;
    }
    else
    {
        printf("Invalid!\n");
    }
        
    }
    free(option);
    return 0;
}

void removeSpaces(char *str,int i,int j)
{
    if(str[i]=='\0')
        return;
    if(str[i]==' ')
    {
        removeSpaces(str,i+1,j);
        
    }
    else
    {
        
        str[j]=str[i];
        
        removeSpaces(str,i+1,j+1);
    }
}