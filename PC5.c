#include<stdio.h>
#include<string.h>

int main(){
    char n[20], s[20];
    gets(n);
    gets(s);
    strncat(n, s, 20);
    printf("%s\n", n);
    return 0;
}
