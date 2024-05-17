#include <iostream>

using namespace std;

int main()
{
	int i = 123;
	float f = 1234.567;
	char x = 'z', y[50] = "Visual Studio C++ 2019\n";
	char ch[50];


	cout << "inteiro= " << i << '\n';
	cout << "real= " << f << '\n';
	cout << "carater= " << x << '\n';
	cout << "string= " << y << '\n';

	cout << "int = ";
	cin >> i;
	cout << "i= " << i << '\n';

	cout << "float = ";
	cin >> f;
	cout << "f= " << f << '\n';

	cout << "char = ";
	cin >> x;
	cout << "ch = " << x << '\n';

	fflush(stdin);
	cout << "string = ";
	cin >> ch;
	//cin.getline(ch, sizeof ch);
	cout << "str = " << ch << '\n';

	cin.get();

	return 0;
}
