#include <iostream> 
using namespace std;
// shortly
int main() {
     pair<int, int> p;
     p = make_pair(10,20);

     cout<<p.first <<" " <<p.second<<endl;

    return 0;
}



// long process
// class my_pair {
//     public:
//         int first, second;
//         void make_pair(int a, int b)
//         {
//             first = a;
//             second = b;
//         }
// };

// int main() {
//     my_pair p; // use my_pair instead of pair
//     p.make_pair(10,20);

//     cout << p.first << " " << p.second << endl;

//     return 0;
// }