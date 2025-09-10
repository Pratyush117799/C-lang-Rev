#include<stdio.h>
int main(){
    register int i =1; // register storage class is faster than auto since it stores in CPU register
    for (i =1;i<=10;i++){
        printf("Value of i is: %d\n", i);
    }
    return 0; // register variables cannot be printed using address operator
    // float cannot be used and are better than auto for loop counters
    // Let us C by Yashavant Kanetkar
}