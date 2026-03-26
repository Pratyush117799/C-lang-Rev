// 006 Print fibonacci upto n terms
#include<stdio.h>
/*int fibo(int n){
    if(n==0){
        return 0;
    }
    else{
        if(n==1){
            return 1;
        }
    }
    return fibo(n-1) + fibo(n-2);
}
    */
int main(){
 int n;
 int next,first=0,prev=1;
 scanf("%d", &n);
 for(int i=0;i<n;i++){
     if(i<=1){
        next = i;
     }
     else{
        next = first + prev ;
        first = prev;
        prev = next;
     } 
 }
 printf("%d", next);
 return 0;
}