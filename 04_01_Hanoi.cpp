//汉诺塔问题 
#include <iostream>
using namespace std;
void Onlymove(int n, string x, string y) 
{
	cout << n << ":" << x << "->" << y << endl;
}

void Totalmove(int m, string x1, string z1, string y1)
{
	if(m == 1)
		Onlymove(1, x1,y1);
	else
	{
		Totalmove(m-1, x1, y1, z1);
		Onlymove(m, x1, y1);		
		Totalmove(m-1, z1, x1, y1);
    } 
}

int main()
{
    int n;
    string A,B,C;
    cin >> n;
    cin >> A;
    cin >> B;
    cin >> C;
	Totalmove(n, A, B, C);	 
	return 0;
}