#include <iostream>
using namespace std;
//git Kurs pull request, commit 
int main() {
    double preis;
	double Rabatt1;
	double Rabatt2;
	double Rabatt3;

	cout << "Preis?: " << endl;
	cin >> preis;

	Rabatt1 = preis * 0.03;
	Rabatt2 = preis * 0.075;
	Rabatt3 = preis * 0.1;




	if (preis >= 1000) {

		cout << " Rabattstufe 3: " << preis - Rabatt3 << endl;


	}

	else if (preis >= 500) {

		cout << "Rabattstufe 2: " << preis - Rabatt2 << endl;

	}
	else if (preis >= 150) {

		cout << " Rabattstufe 1 : " << preis - Rabatt1 << endl;
    }

	else { 
		cout << "Kein Rabatt (zu geringer Preis): " << preis << endl;

	}

     return 0;
}