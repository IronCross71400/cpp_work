#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include "verre.h"
#include "bouteille.h"

using namespace std;

int Bouteille::verser(int q) {
	int ret_value = 0;

	if (!this->m_ouvert) {
		cout << "Ben alors, on est déjà bourré ? La bouteille est fermée..." << endl;
		return 0;
	}

	if (this->m_quantite <= 0) {
		cout << "Va falloir se freiner mon coco... La bouteille est vide" << endl;
		return 0;
	}

	ret_value = min(this->m_quantite, q);

	this->m_quantite = max(this->m_quantite-q, 0);

	return ret_value;
}

int Bouteille::verser(Verre *pv, int q) {
	if (!this->m_ouvert) {
		cout << "Ben alors, on est déjà bourré ? La bouteille est fermée..." << endl;
		return 0;
	}

	if (pv->getVolumeVide() < q) {
		cout << "Hmmm... ca fait beaucoup trop pour ce petit verre" << endl;
		return 0;
	}

	int qte_liquide = this->verser(q);

	pv->remplir(qte_liquide);

	return qte_liquide;
}

string Bouteille::toString() {
	stringstream ss;
	string str = (this->m_ouvert) ? "ouverte" : "fermée";
	ss << "Cette bouteille " << str << " de " << this->m_nom << " contient " << this->m_quantite << "cl. ";
	return ss.str();
}

ostream& operator<<(ostream& os, Bouteille& b) {
    os << b.toString();
    return os;
}
