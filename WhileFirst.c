#include<stdio.h>
int main(){
    int i = 0;  // i is initialized to 0
    printf("Using the While loop, the intger values from one to 49 will be printed below... \n \n");
    while(i++<49){              // the condition is checked first, then the value of i is incremented
        printf("i is %d \n", i);  // the value of i is printed
    }
    return 0;  // I have used the guide and help from the book "Let Us C by Yashavant Kanetkar
}