#include<stdio.h>
#include<conio.h>
int main(){
    int x=300;
    char *p= (char *)&x;
    // int *p=&x;
    int i;
    for(i=0;i<sizeof(x);i++){
        printf("%d -> %d \n",p,*p);
        p++;
    }
    int x1=10;
    int y=20;
    int z=x1+y;
    printf("%d",z);
    return 0;
}