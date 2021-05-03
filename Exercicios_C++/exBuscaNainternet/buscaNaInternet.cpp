#include <iostream>
using namespace std;

int     main(void)
{

int t, seg, pri;

cin >> t;

seg = t + t;
pri = seg * 2;

if (1 <= t <= 1000)
{
	cout << pri << endl;
}

return (0);
}