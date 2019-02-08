//============================================================================
// Name        : td10_b.cpp
// Author      : ironc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "rationnels.h"
using namespace std;

int main() {
	Rational r1;
	Rational r2(3);
	Rational r3(-9,-6,true);
	Rational r4(9,-6,false);

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;

	cout << "num r1 : " << r1.getNum() <<endl;
	cout << "r3 réel : " << r3.toDouble() << endl;

	r3.setNum(9);
	cout << "num r3 : " << r3.getNum() <<endl;

	cout << "r3 : " << r3 << endl;
	r3 += 2;
	cout << "r3 += 2 => r3 = " << r3 << endl;

	r2.setDenum(4);
	cout << "denum r2 : " << r2.getDenum() <<endl;


}
