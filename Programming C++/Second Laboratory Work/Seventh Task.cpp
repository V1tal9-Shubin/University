#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Ukrainian");
	int c;
	cout << "Введіть ціле дестяткове число:" << endl;
	cin >> c;
	cout << "Ваш символ:" <<(char)c  << endl;
	system("pause");
	return 1;
