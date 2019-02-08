#include "verre.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int Verre::remplir(int q) {
	int old_quantite = this->quantite;
	this->quantite = min(q+this->quantite, this->contenance);
	return (this->quantite - old_quantite);
}

int Verre::boire(int q) {
	int ret_value = 0;

	if (this->quantite == 0) {
		cout << "Snif... Ce verre est vide" << endl;
		return 0;
	}

	if (q < 0) {
		ret_value = this->quantite;
		this->quantite = 0;
		return ret_value;
	}

	ret_value = min(this->quantite, q);

	this->quantite = max(this->quantite-q, 0);

	return ret_value;
}

string Verre::toString() {
	stringstream ss;
	ss << "Ce verre de " << this->contenance << "cl contient " << this->quantite << "cl. ";
	return ss.str();
}

ostream& operator<<(ostream& os, Verre& v) {
	os << v.toString();
	return os;
}
