#include <stdio.h>
#include <conio.h>

int main(){
    int x, y, z;
    printf("enter first number: ");
    scanf("%d", &x);
    printf("enter second number: ");
    scanf("%d", &y);
    z = x * y;
    printf("the product is %d", z);
    getch();
}