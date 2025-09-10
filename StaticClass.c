#include<stdio.h>
void inc(){
    auto int i =1;
    static int j = 1;
    i++;
    j++;
    printf("Value of i and j are: %d %d\n", i, j);
}
int main(){
inc();
printf("First call \n");
inc();
printf("Second call \n");
inc();
inc();
printf("\n\n\n\n\n program themed auto v/s static variable ends here...\n\n\n ");
return 0;
}
// The value of static variable j is retained between function calls whereas 
// the value of auto variable i is reinitialized to 1 each time the function is called.