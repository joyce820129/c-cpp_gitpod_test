/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int takeNumbers(int a, int b);
int dividNumbers(int a, int b);
int multNumbers(int a, int b);

int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    printf("a+b = %d \n",sum);
    
    sum = takeNumbers(n1, n2);  // function call
    printf("a-b = %d \n",sum);
    
    sum = multNumbers(n1, n2);  // function call
    printf("a*b = %d \n",sum);
    
    sum = dividNumbers(n1, n2);  // function call
    printf("a/b = %d \n",sum);
    return 0;
}



int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                     
    //return statement
}

int takeNumbers(int a, int b)         // function definition   
{
    int result;
    result = a-b;
    return result;                     
    //return statement
}

int dividNumbers(int a, int b)         // function definition   
{
    int result;
    result = a/b;
    return result;                     
    //return statement
}

int multNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                     
    //return statement
}