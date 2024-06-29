#include <stdio.h>
int main() {
    long long int a,b;
      scanf("%lld %lld",&a,&b);
      int sum = a+b;
      printf("%lld + %lld = %d\n",a,b,sum);
     long long int sum2 = a*b;
      printf("%lld * %lld = %d\n",a,b,sum2);
     int sum3 = a-b;
      printf("%lld - %lld = %d\n",a,b,sum3);
   return 0;
}