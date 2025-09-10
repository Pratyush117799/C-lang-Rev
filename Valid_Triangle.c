#include<stdio.h>
int main(){
    float alpha,beta,theta;
    printf("Let us suppose a triangle with alpha, beta and theta as the respective angles.\n Input the values:");
    scanf("%f%f%f",&alpha,&beta,&theta);
    printf("Validity without using ternary operators \n");
    if((alpha+beta+theta == 180.00 ) && (alpha>0) && (beta>0) && (theta>0)){
        printf("The triangle is valid.\n");
    }
    else{
        printf("The triangle is not valid.\n");
    }
    printf("Validity using ternary operators \n");
    ( (alpha+beta+theta == 180.00 ) && (alpha>0) && (beta>0) && (theta>0) ) ? printf("The triangle is valid.\n") : printf("The triangle is not valid.\n");
    return 0;
}