#include <stdio.h>
#include <conio.h>

int main(){
    int x, y, z;
    printf("enter first number: ");
    scanf("%d", &x);
    printf("enter second number: ");
    scanf("%d", &y);
    z = x + y;
    printf("the sum of two numbers is %d", z);
    getch();
}