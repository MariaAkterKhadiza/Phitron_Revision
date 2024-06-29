#include <stdio.h>
int main() {
   long long int a,b;
  
    scanf("%lld %lld",&a,&b);
    int summation = a+b;
    printf(" %lld + %lld = %d\n",a,b,summation);
    int subtraction = a - b;
    printf(" %lld - %lld = %d\n",a,b,subtraction);
    int multiplication = a*b;
    printf(" %lld * %lld = %d\n",a,b,multiplication);
    double division = (double)(a*1.0)/b;
    printf(" %lld / %lld = %.2lf\n",a,b,division);
    

   return 0;
}