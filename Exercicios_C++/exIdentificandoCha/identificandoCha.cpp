#include <iostream>
 
using namespace std;
 
int     main(void) 
{
 
   int T, A, B, C, D, E, resp;
   
   cin >> T;
   resp = 0;
   
   if (1 <= T <= 4)
   {
       cin >> A >> B >> C >> D >> E;
   }
   if (1 <= A, B, C, D, E <= 4)
   {
       if (T == A)
       {
       	resp = resp + 1;
       }
       if (T == B)
       {
       	resp = resp + 1;
       }
       if (T == C)
       {
       	resp = resp + 1;
       }
       if (T == D)
       {
       	resp = resp + 1;
       }
       if (T == E)
       {
       	resp = resp + 1;
       }
   }
   cout << resp << endl;
   
   return (0);
}
