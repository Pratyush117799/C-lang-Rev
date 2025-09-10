#include<stdio.h>
int main(){
    int i,fact=1;
    printf("Enter a number to find its factorial \n");
    scanf("%d",&i);
    while(i !=0){
        fact = fact * i;
        i--;
    }
    printf("Factorial is %d \n",fact);
    return 0;
}