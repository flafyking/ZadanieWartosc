#include <iostream>
#include <conio.h>
using namespace std;

int a,b,c;
int naj, drugi, trzeci;

int maks( int a, int b, int c ) {
	
	return max( max(a,b), c ); 
	}

int main(int argc, char** argv) {
	
	cout << "Podaj odcinek I" << endl;
	cin >> a;
	
	cout << "Podaj odcinek II" << endl;
	cin >> b;
	
	cout << "Podaj odcinek III" << endl;
	cin >> c;
	
	if (a==b && b == a && c == a){
		cout << "Trojkat rownoboczny" << endl;
	}
	
	if (a*a+b*b == c*c|| a*a + c*c == b*b || b*b + c*c == a*a){
		cout << " Trojkat prostokatny" << endl;
	}
	if(a == b || b == c || c == a){
		cout << "Trojkat rownoramienny" << endl;
	}
	else
	return 0;
}
	
