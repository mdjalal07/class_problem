#include<stdio.h>
int main(){
    struct s1{
        int a;
        char b;
        char c;
    };
    struct s2{
        char x;
        int y;
        char z;
    } ;
    printf("sizze of s1 %d \n ",sizeof(struct s1));
    printf("size of s2 %d",sizeof(struct s2));
    return 0;
}