// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов
#pragma once
#include "monom.h"
#include "List.h"
#include <ctype.h>

class Polynom
{

private:
	int pos = 0;
	List<Monom> monoms;

public:
	Polynom() {};

	Lexema lexem(const std::string& polynomStr);
	
	void parser(const std::string& polynomStr);
	Polynom cancellation();
	
	bool operator==(const Polynom& _Polynom) const;
	
	Polynom operator+(const Polynom& _Polynom) const;
	Polynom operator-(const Polynom& _polynom) const;
	Polynom operator*(const Polynom& _Polynom) const;
	
	Polynom operator+(const double& _Num) const;
	Polynom operator-(const double& _Num) const;
	Polynom operator*(const double& _Num) const;


	friend std::ostream& operator<< (std::ostream& out, const Polynom& _Pol)
	{
		Node<Monom>* tmpPol = _Pol.monoms.GetHead();;
		double coeff = 0;
		int i = 0;
		while (tmpPol)
		{
			if (i != 0)
			{
				if (tmpPol->data.coeff() >= 0)
					std::cout << "+";
			}
			std::cout << tmpPol->data;
			tmpPol = tmpPol->next;
			i++;
		}
		return out;
	}
};

