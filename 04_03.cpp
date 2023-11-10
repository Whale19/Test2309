#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
    int x=1;
	cin >> a >> b;
    while (x<21)
    {
        if (x <= log10(b)/log10(a) && log10(b)/log10(a) < x+1)
            {
                cout << x << endl;
                break;
            }
        else if (pow(a,x) <= b && b < pow(a,(x+1))) 
            {
                cout << x << endl;
                break;
            }
        else
            {x=x+1;}
    }
}