#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� �������
	double R;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	

	// ������������ � ����� ����
	if ((x * x + y * y <= R * R  && x >= 0) || (y <= R && x <= 0 && y >= -x) || (y >= -R && x <= 0 && y <= x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
