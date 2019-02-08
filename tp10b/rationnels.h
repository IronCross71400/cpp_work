/*
 * rationnels.h
 *
 *  Created on: 8 févr. 2019
 *      Author: ironc
 */

#ifndef RATIONNELS_H_
#define RATIONNELS_H_

#include <iostream>

using namespace std;

class Rational {
	//attributes
private:
	int m_num;
	int m_denum;
	bool m_reduc;

private:
	void reduce();

public:
	// ctor
	Rational(int num = 0, int denum = 1, bool reduce = true):m_num(num),m_denum(denum),m_reduc(reduce){if(reduce)this->reduce();};

	// dtor
	~Rational(){std::cout << "destructeur de Rational" << std::endl;};

	inline int getNum() {return this->m_num;};
	inline int getDenum() {return this->m_denum;};

	inline void setNum(int a) {this->m_num = a;};
	void setDenum(int a);

	Rational(const Rational & other):m_num(other.m_num), m_denum(other.m_denum), m_reduc(other.m_reduc){};

	inline double toDouble() {return (double) (this->m_num)/(this->m_denum);};

	friend ostream& operator<<(ostream& out, const Rational & r);
	friend Rational operator*(const Rational& r1, const Rational& r2);
	friend Rational operator+(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend Rational operator-(const Rational& r1, const Rational& r2);

	friend Rational operator*(const Rational& r1, int n);
	friend Rational operator+(const Rational& r1, int n);
	friend Rational operator/(const Rational& r1, int n);
	friend Rational operator-(const Rational& r1, int n);

	friend Rational operator*(int n, const Rational& r2);
	friend Rational operator+(int n, const Rational& r2);
	friend Rational operator/(int n, const Rational& r2);
	friend Rational operator-(int n, const Rational& r2);

	Rational& operator*=(const Rational& r2);
	Rational& operator+=(const Rational& r2);
	Rational& operator/=(const Rational& r2);
	Rational& operator-=(const Rational& r2);

	Rational& operator*=(const int n);
	Rational& operator+=(const int n);
	Rational& operator/=(const int n);
	Rational& operator-=(const int n);

	friend Rational pow(const Rational& r, int n);

};


#endif /* RATIONNELS_H_ */
