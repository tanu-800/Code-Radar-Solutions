#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("\nName: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}
