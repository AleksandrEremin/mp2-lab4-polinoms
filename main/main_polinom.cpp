#pragma once
#include "polynomial.h"

using namespace std;
void main()
{

	setlocale(LC_ALL, "Russian");

	//Polynom Q;
	//Q.parser("x-x+5");
	//std::cout << "�������� 2.9:  " << Q << endl;


	//Q=Q.cancellation();
	////Q = Q + 4;
	//
	//std::cout << "�������� 2.10:  " << Q << endl;


	//Monom m;
	Polynom Q;
	Polynom QQ;
	Polynom qqq;
	Q.parser("5,6x"); 
	cout << "�������� 2.5:  " << Q << endl;


	QQ.parser("0.2x");
	cout << "�������� 2.6:  " << QQ << endl;
	//Q = Q -QQ;
	//Q = Q * QQ;
	//std::cout << "�������� 2.7:  " << Q << endl;
	Q = Q-QQ;
	//if(Q==QQ)
	std::cout << "�������� 2.8:  " << Q << endl;
	//else
	//	std::cout << "����sdsdsdsdsd 2.8:  " << endl;


	//Monom a(1, 1, 2, 3);
	//Monom b(2, 1, 2, 3);
	//Monom c(2, 0, 2, 3);
	//Monom d(2, 1, 0, 3);
	//cout << "�������� 2.1:  " << c << endl;
	//cout << "�������� 2.2:  " << a + b << endl;
	//cout << "�������� 2.3:  " << a * b << endl;
	//cout << "�������� 2.4:  " << a * c << endl<<endl<<endl;



}