#include <iostream> 
using namespace std;

int main()
{
	setlocale(0, "");
	int god;
	cout << "Введите год: ";
	cin >> god;
	if ((god % 4 == 0) && (god % 100!= 0) || (god % 400 == 0)) {  // Если 
		cout << "366" << endl;
	}
	else {  // иначе
		cout << "365" << endl;
	}
	system("pause");
	return 0;
}
