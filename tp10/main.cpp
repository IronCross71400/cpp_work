#include <iostream>

#include "mescomplexes.h"

using namespace std;


main() { 
    MesComplexes x1(1,10), x2(4,2), x3(x2), x4;
    cout <<"Affichage de x1 x2 et x3 " <<endl;
    x1.afficher();
    x2.afficher();
    x3.afficher();
    cout << "Partie reelle de x1 " << x1.getReelle()<<endl;
    x1.setImaginaire(1);
    cout <<"Affichage de x1: ";
    x1.afficher();
    x3.setRho(1.0);
    cout <<"Affichage de x3 : ";
    x3.afficher();
    cout <<"Costa:"<<x2.costa()<<endl;
    x3=x1+x2;
    x4=x3;
    cout <<"x3="<<x3<<endl;
    cout <<"x4="<<x4<<endl;
    MesComplexes x5(x3);
    x4 = x1 * x2;
    cout <<"x4="<<x4<<endl;
    x5 = x5 * x1;
    cout <<"x5="<<x5<<endl;
    x5 = x1 * x1 * x1 * x1;
    cout <<"x5="<<x5<<endl;
    x5 = pow(x1,6);
    cout <<"x5="<<x5<<endl;
}
