#include "verre.h"
#include "bouteille.h"
#include <iostream>

using namespace std;

int main () {
//	Verre v1(20);
//	v1.remplir(10);
//	cout << "v1 : " << v1.toString() << endl;
//	cout << "Ah glou Ah glou Ah glou" << endl;
//	v1.boire();
//	cout << "v1 : " << v1.toString() << endl;
//	v1.remplir(15);
//	cout << "v1 : " << v1.toString() << endl;
//	v1.remplir(10);
//	cout << "v1 : " << v1.toString() << endl;
//	v1.boire(10);
//	cout << "v1 : " << v1.toString() << endl;
//	v1.boire(15);
//	cout << "v1 : " << v1.toString() << endl;
//	v1.boire(15);
//	cout << "v1 : " << v1.toString() << endl;

	Bouteille orange("jus d'orange", false, 100);
	Bouteille vodka("vodka", false, 100);

	Verre v1(20);

	cout << orange << endl;
	cout << vodka << endl;

	cout << v1 << endl;

	orange.ouvrir();
	vodka.ouvrir();

	vodka.verser(&v1, 6);
	orange.verser(&v1, 14);

	cout << orange << endl;
	cout << vodka << endl;

	cout << v1 << endl;

	v1.boire(10);
	v1.boire();

	cout << orange << endl;
	cout << vodka << endl;

	cout << v1 << endl;

}
