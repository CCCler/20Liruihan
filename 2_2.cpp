#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "请输入x的值" << endl;
	cin >> x ;
	if (x > 0 && x < 1) {
		y = 3-2*x;
	}
	else if (x >= 1 && x < 5) {
		y = 1 / 2*x + 1;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
	}
	else {
		exit(0);
	}
	cout << "计算出y的值为:" << y << endl;
}