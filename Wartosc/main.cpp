#include <iostream>

using namespace std;
int a, b; 

int main(int argc, char** argv) {
	cout << "|x + a| = b" << endl;
	cout << " Podaj liczbe a" << endl;
	cin >> a;
	cout << " Podaj liczbe b" << endl;
	cin >> b;
	cout << "X rowna sie   " << b-a << "   lub    " << -b-a << endl;
	
	return 0;
}



