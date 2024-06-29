#include <stdio.h>
#include <limits.h>
//using namespace std;
int main() {
    // int n;
    // scanf("%d",&n);
    // int result = INT_MIN;
    // while(n--)
    // {
    //     int a;
    //     scanf("%d",&a);
    //     if(a>result)
    //     {
    //         printf("%d %d\n",a,result);
    //         result = a;
    //     }
    // }

    int n = 1145;
    int rev = 0;
    while( n != 0)
    {
        int last_digit = n%10;
        rev = rev* 10 + last_digit;
        n = n /10;
    }
    printf("%d",rev);
   return 0;
}