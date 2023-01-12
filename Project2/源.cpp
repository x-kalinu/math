#include<iostream>
using namespace std;
int main() {
	int k, l = 0,b=0, i;
	double j = 0;
	cout << "范围?" << endl;
	cin >> k;//定义变量，获取范围
	for (i = 6; i <= k; i++) {
		l = 0;
		for (int m = 1; m < i; m++) {
			j = i % m;
			
			if (j == 0) {
				l = l + m;
				

			}
			
		}//判断是否是完全数
		if (l == i) {
				cout <<"完全数:"<< i << endl;
				cout << "因数:" << endl;
				for (int a = 1; a < i; a++) {
					b = i % a;
					if (b == 0) {
						cout << a << endl;
					}
				}
			}//输出结果及因数，重复运算，消耗额外资源，待优化



	}
}