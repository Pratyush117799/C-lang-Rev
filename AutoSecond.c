#include<stdio.h>
int main(){
    auto int i =1;
    {
        auto int i =2;
        printf("Value of i in inner block is: %d\n", i);
        {
            auto int i =3;
            printf("Value of i in innermost block is: %d\n", i);
        }
    }
    printf("Value of i in outer block is: %d\n", i);
    // after i = 3 is printed, the control goes back to the i =2, which then dies
    // outside the inner block and i=1 is printed
    return 0;
}