#include <iostream> 
using namespace std;

int main()
{
	setlocale(0, "");
	int god;
	cout << "������� ���: ";
	cin >> god;
	if ((god % 4 == 0) && (god % 100!= 0) || (god % 400 == 0)) {  // ���� 
		cout << "366" << endl;
	}
	else {  // �����
		cout << "365" << endl;
	}
	system("pause");
	return 0;
}
