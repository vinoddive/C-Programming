#include<stdio.h>
void main(){
    int a=12, c;

    c = a;
    printf("c = %d \n", c);

    c += a;
    printf("c = %d \n", c);

    c -= a;
    printf("c = %d \n", c);
    
    c *= a;
    printf("c = %d \n", c);

    c /= a;
    printf("c = %d \n ", c);
     
    c %= a;
    printf("c = %d \n", c);

}