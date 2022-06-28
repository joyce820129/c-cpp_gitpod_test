#include <iostream>

struct Distance{
    int m;
    float cm;
};

typedef struct Distance_t{
    int m;
    float cm;
} distances_t;

int main()
{
    struct Distance d1 , d2 ;
    distances_t     d3 , d4 ;
    
    d1.m = 1;
    d1.cm = 78.5;
    
    d2.m = 1;
    d2.cm = 60.5;
    
    d3.m = 1;
    d3.cm = 78.5;
    
    d4.m = 1;
    d4.cm = 60.5;
    printf("your height = %d m %f cm \n",d1.m,d1.cm);
    printf("her height = %d m %f cm \n",d2.m,d2.cm);
    
    printf("your height = %d m %f cm \n",d3.m,d3.cm);
    printf("her height = %d m %f cm \n",d4.m,d4.cm);
}
