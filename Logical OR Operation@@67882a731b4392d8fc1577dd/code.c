#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x||y>0){
        printf("True");
    }
    else if(x||y<0){
        printf("False");
    }
    else{
        printf("False");
    }
    return 0;
}