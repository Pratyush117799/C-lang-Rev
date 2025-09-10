#include<stdio.h>
int main(){
    int emp=10,OvertimeHoursInRs=120;
    int wH; // Number of hours worked by employee
    int otpay;  //overtime pay
    while(emp!=0){
    printf("Enter the working hours of employee: ");
    scanf("%d",&wH);
    if(wH>40){
   otpay= (wH-40)*OvertimeHoursInRs;
   printf("\n Overtime pay is: %d \n",otpay);
    emp--;
    }
    else{
        printf("\n No overtime pay \n");
        emp--;
    }
    }
    return 0;
}