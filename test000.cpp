#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    printf("請輸入第一個數字 \n");
    scanf("%d",&a);

    printf("請輸入第二個數字 \n");
    scanf("%d",&b);

    printf("請輸入兩數之和 \n");
    scanf("%d",&c);

    if( a+b == c ){
        printf("right \n");
   
    }else{
        printf("error \n");
    }
    return 0;
}
