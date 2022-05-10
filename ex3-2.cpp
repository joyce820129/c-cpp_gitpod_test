#include <iostream>

using namespace std;

int main()
{
    int x=16;
    
    x >> 1;
    printf("%d \n" ,x);
    
    x >> 2;
    printf("%d \n",x);
    
    x << 1;
    printf("%d \n",x);
}
