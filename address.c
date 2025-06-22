#include <stdio.h>
typedef char *string;
int main(void)
{
    int num = 100;
    int *a = &num;

    printf("the number is: %i\n", num);
    printf("the number is stored in address: %p\n", a);
    printf("the address of the pointer: %p\n", &a);
    printf("value of the number from the pointer: %i\n", *a);
    
    char ch[] = {'H', 'I', '!', '\0'}; 
    char *str = &ch[0]; //string str = &ch[0]; also as, string str = "HI";
    printf("the string is: %s\n", str);
    printf("the string value is stored in address: %p\n", str);
    printf("the string value is stored in address 0: %p\n", &str[0]);
    printf("the string value is stored in address 1: %p\n", &str[1]);
    printf("the string value is stored in address 2: %p\n", &str[2]);
    printf("the string value is stored in address 3: %p\n", &str[3]);
    printf("the string is stored in: %p\n", &str);
    printf("1st value of the string from the pointer: %c\n", *str);
    printf("2nd value of the string from the pointer: %c\n", *(str+1));
    printf("3rd value of the string from the pointer: %c\n", *(str+2));
    printf("NULL value of the string from the pointer: %c\n", *(str+3));
    printf("1st value of the string: %c\n", str[0]);
    printf("2nd value of the string: %c\n", str[1]);
    printf("3rd value of the string: %c\n", str[2]);
    printf("NULL value of the string: %c\n", str[3]);
    
}