#include <iostream>

using namespace std;

int main(){
    
    int r;
    
    
    printf("請輸入半徑: \n" );
    scanf("%d",&r);
    
    if( r >= 0 ){
        printf("圓面積= %f \n",r*r*3.14);
        printf("圓周長= %f \n",r*2*3.14);
    }else{
        printf("請輸入r>=0的數字");
    }

    return 0;
}
