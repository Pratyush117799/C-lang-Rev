#include<stdio.h>
#include<stdlib.h>
int i; // default initialization to 0
void inc();
void dec();
int main(){
    printf("Initial value of i: %d\n", i);
    inc();
    printf("Value of i after increment: %d\n", i);
    inc();
    printf("Value of i after another increment: %d\n", i);
    dec();
    dec();
    printf("Value of i after two decrements: %d\n", i);
    return 0;
}
void inc(){
    i++;
}
void dec(){
    i--;
}