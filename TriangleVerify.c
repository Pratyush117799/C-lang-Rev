#include<stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter the lengths in cm for verification of triangle \n");
    scanf("%f %f %f", &s1,&s2,&s3);
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        printf("The line segments can form a triangle \n");
    }
    else{
        printf("The line segments cannot form a triangle \n");
    }
    return 0;
    // Triangle Inequality Theorem, geometry question type from the book "let us c"
}