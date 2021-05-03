#include <iostream>
 
using namespace std;
 
int main()
{
 int    n;
 int    m;
 int    dif;


 cin >> n;
 cin >> m;
 
 if (1 <= n <= 40)
 {
     cin >> m;
 }
 if (1 <= m <= 40)
 {
     dif = n - m;
 }
 
cout << dif << endl;
 
    return 0;
}