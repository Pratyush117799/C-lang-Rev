#include<stdio.h>
int main(){
int num;
int isprime = 1;
scanf("%d", &num);
if(num<2){
    printf("Number not prime");
}else{
    for(int i=2;i<=num/2;i++){
        if(num%i == 0){
            isprime= 0;
            break;
        }
    }
}
if(isprime){
    printf("Prime number");
}else{
    printf("The number is not prime");
}
return 0;
}