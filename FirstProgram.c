#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float per;
    printf("Enter your marks for the five subjects of the course \n");
    scanf("%d %d %d %d %d", &sub1,&sub2,&sub3,&sub4,&sub5);
    printf("\n");
    per = ((sub1+sub2+sub3+sub4+sub5)/500.0) * 100;
    printf("The percentage of the course is %f", per);
    // second year m practice ke liye codes let us c se 
    return 0;
}