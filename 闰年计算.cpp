#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int y = 0;
	cout << "请输入年份" << endl;
	cin >> y;
	if (y % 4 == 0)
   {
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
				cout << "该年是闰年" << endl;/*被400整除的世纪闰年*/
			else
				cout << "该年不是闰年" << endl;/*被4和100整除但不能被400整除的世纪年*/
		}
		else
			cout << "该年是闰年" << endl;/*能被4整除但不能被100整除的普通闰年*/
	}
	else
		cout << "该年不是闰年" << endl;/*不能被4整除的普通年*/
	return 0;
}
 
