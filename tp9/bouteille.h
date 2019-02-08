#ifndef BOUTEILLE_H_
#define BOUTEILLE_H_

#include "verre.h"
#include <string>

class Bouteille {
private:
	std::string m_nom;
	bool m_ouvert;
	int m_quantite;

public:
	void ouvrir() {m_ouvert = true;} ;
	void fermer() {m_ouvert = false;} ;

	int verser(int q);
	int verser(Verre *pv, int q);

	string toString();

	Bouteille(string nom, bool ouv, int q):m_nom(nom),m_ouvert(ouv),m_quantite(q) {} ;
	Bouteille(string nom, int q):m_nom(nom),m_ouvert(false),m_quantite(q) {} ;
	Bouteille(string nom):m_nom(nom),m_ouvert(false),m_quantite(100) {} ;
	~Bouteille(){};
};

ostream& operator<<(ostream& os, Bouteille& b);

#endif
