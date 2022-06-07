#include <iostream>
using namespace std;

int f(int n)
{
    if(n==1){
        return 1;
    }
    return n + f(n-1);
}

int main()
{
   int i = 10;
   for(i=1 ; i<=10 ;i++){
       printf("1+...+ %d = %d \n",i,f(i));
   }


    return 0;
}