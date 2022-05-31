#include <iostream>
using namespace std;
int main()
{
    int a,b;
    printf("請輸入你的年齡 \n");
    scanf("%d",&a);

    printf("請輸入你朋友的年齡 \n");
    scanf("%d",&b);

    if( a > b ){
        printf("你的年齡比較大 \n");
    }else if( a==b ){
        printf("你跟朋友的年齡一樣大 \n");
    }else{
        printf("你朋友的年齡比較大 \n");
    }
    return 0;
}
