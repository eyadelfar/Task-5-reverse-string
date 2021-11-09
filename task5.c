#include <stdio.h>

void reverse(char *str){
    int i =strlen(str)-1;
    for(;i>=0;i--)
        printf("%c",str[i]);
}

int main(){
    char str[25];
    printf("Enter a string\n");
    gets(str);
    printf("Reverse of entered string is \"");
    reverse(str);
    printf("\"");

}