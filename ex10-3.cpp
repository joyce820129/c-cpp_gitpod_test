#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char s[] = "Hello world ! Are you in Taiwan ?";
    int i;
    int n = sizeof(s)/sizeof(char),n_i;
    char* ss;
    
    for (i = 0; s[i] != '\0' ; ++i);
    n_i = i;
    printf("Length of the srting: %d  \n", i);
    printf("Length of the srting: %d  \n", n);
    ss =s;
    for (i = 0; i < n_i ; ++i){
        //printf("%c",s[i]);
        printf("%c",*(ss+i));
    }
    printf("\n");
    return 0;
}
