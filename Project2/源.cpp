#include<iostream>
using namespace std;
int main() {
	int k, l = 0,b=0, i;
	double j = 0;
	cout << "��Χ?" << endl;
	cin >> k;//�����������ȡ��Χ
	for (i = 6; i <= k; i++) {
		l = 0;
		for (int m = 1; m < i; m++) {
			j = i % m;
			
			if (j == 0) {
				l = l + m;
				

			}
			
		}//�ж��Ƿ�����ȫ��
		if (l == i) {
				cout <<"��ȫ��:"<< i << endl;
				cout << "����:" << endl;
				for (int a = 1; a < i; a++) {
					b = i % a;
					if (b == 0) {
						cout << a << endl;
					}
				}
			}//���������������ظ����㣬���Ķ�����Դ�����Ż�



	}
}