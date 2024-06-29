#include <stdio.h>
int main() {
    //for(int i=1; i<=100; i++)  // 1 theke 100
    //for(int i=2; i<=100; i+=2) // 1 to 100 only even number
    // for(int i=1; i<=100; i+=2) // 1 to 100 only odd number
     //for(int i=1; i<=100; i*=2) // 1 to 100 , multiplication kore 2,4,8,16,36,64 number
     for(int i=100; i>=1; i--)  // 1 to 100 reverse
    {
        printf("%d\n",i);
    }
   return 0;
}