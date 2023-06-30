#ifndef VERRE_H_
#define VERRE_H_

#include <string>
#include <algorithm>

using namespace std;

class Verre {
private:
    int contenance, quantite;

public:
    int remplir(int q) ;

    int boire(int q = -1) ;

    inline int getVolumeVide() { return contenance - quantite; } ;

    string toString();

    Verre(int c):contenance(c),quantite(0) {};
    ~Verre() {};
};

ostream& operator<<(ostream& os, Verre& v);

#endif
