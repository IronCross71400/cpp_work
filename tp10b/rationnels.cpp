/*
 * rationnels.c
 *
 *  Created on: 8 févr. 2019
 *      Author: ironc
 */

#include "rationnels.h"

int calculer_pgcd(int n1, int n2 ) {
   int r, a, b;
   a = abs(n1);
   b = abs(n2);
   while (b != 0) {
      r = a % b;
      a = b;
      b = r;
   }
   if(n2 < 0) {
      a = -a;
   }
   return a;
}

void Rational::reduce() {
	int pgcd = calculer_pgcd(this->m_num, this->m_denum);

	this->m_num /= pgcd;
	this->m_denum /= pgcd;
}

void Rational::setDenum(int a) {
	if (a == 0) {
		std::cout << "denom nul. Fin du programme" << std::endl;
		exit(1);
	}

	this->reduce();
}
// void affiche() {std::cout << this->m_num << "/" << this->m_denum;};

ostream& operator<<(ostream& out, const Rational & r) {
	out << r.m_num << "/" << r.m_denum;
	return out;
}

Rational operator*(const Rational& r1, const Rational& r2) {
	Rational ret(r1.m_num+r2.m_num, r1.m_denum*r2.m_denum, r1.m_reduc || r2.m_reduc);
	return ret;
}

Rational operator+(const Rational& r1, const Rational& r2) {
	Rational ret(r1.m_num*r2.m_denum + r2.m_num*r1.m_denum, r1.m_denum*r2.m_denum, r1.m_reduc || r2.m_reduc);
	return ret;
}

Rational operator-(const Rational& r1, const Rational& r2) {
	Rational m_u(-1,1,true);
	return (r1+(m_u*r2));
}

Rational operator/(const Rational& r1, const Rational& r2) {
	if(r2.m_num == 0) {
		cout << "Div by zero." << endl;
		exit(1);
	}
	Rational inv(r2.m_denum,r2.m_num,r2.m_reduc);
	return r1*inv;
}

Rational pow(const Rational& r, int n) {
	if (n == 1) {
		return r;
	}

	return r*pow(r, n-1);
}


Rational operator+(const Rational& r1, int n) {
	Rational r2(n);
	return r1 + r2;
}
Rational operator/(const Rational& r1, int n) {
	Rational r2(n);
	return r1 / r2;
}
Rational operator-(const Rational& r1, int n) {
	Rational r2(n);
	return r1 - r2;
}
Rational operator*(const Rational& r1, int n) {
	Rational r2(n);
	return r1 * r2;
}

Rational operator*(int n, const Rational& r2) {
	return r2 * n;
}
Rational operator+(int n, const Rational& r2) {
	return r2 + n;
}

Rational operator/(int n, const Rational& r2) {
	Rational ret(n*r2.m_denum,r2.m_num);
	return ret;
}

Rational operator-(int n, const Rational& r2) {
	Rational m_u(-1,1,true);
	return m_u*r2 + n;
}

Rational& Rational::operator*=(const Rational& r2) {
	*this = *this*r2;
	return *this;
}
Rational& Rational::operator+=(const Rational& r2) {
	*this = *this+r2;
	return *this;
}
Rational& Rational::operator/=(const Rational& r2) {
	*this = *this/r2;
	return *this;
}
Rational& Rational::operator-=(const Rational& r2) {
	*this = *this-r2;
	return *this;
}

Rational& Rational::operator*=(int n) {
	*this = *this*n;
	return *this;
}
Rational& Rational::operator+=(int n) {
	*this =  *this+n;
	return *this;
}
Rational& Rational::operator/=(int n) {
	*this = *this/n;
	return *this;
}
Rational& Rational::operator-=(int n) {
	*this = *this-n;
	return *this;
}
