#include <iostream>

using namespace std;

int main(){
    
    int y;
    
    printf("請輸入年分: \n");
    scanf("%d",&y);
    
    if( y % 4 == 0 ){
        
        if( y % 100 == 0 ){
            
            if( y % 400 == 0 ){
               printf("%d是閏年",y);
            }else{
                printf("%d不是閏年",y);
            }
        }else{    
            printf("%d是閏年",y);
        }
    }else{
                printf("%d不是閏年",y);
            }
    
    return 0;
}
