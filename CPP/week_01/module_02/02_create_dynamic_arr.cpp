#include <bits/stdc++.h>

using namespace std;

int main()

{

 int n; 

 cin >> n; // এরে সাইজ ইনপুট নিচ্ছি। 

 int *a = new int[n]; // সেই সাইজের ডায়নামিক এরে ডিক্লেয়ার করছি যা হিপ মেমরিতে স্টোর থাকবে।

 for (int i = 0; i < n; i++)

 {

 cin >> a[i]; // নরমাল পদ্ধতিতে এরে ইনপুট নিচ্ছি। 

 }

 for (int i = 0; i < n; i++)

 {

 cout << a[i] << endl; // নরমাল পদ্ধতিতে আউটপুট দেখাচ্ছি।

 }

 return 0;

}
