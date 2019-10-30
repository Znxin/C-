#include<iostream>
#include"Polynomial.h"

using namespace std;

Polynomial::Polynomial(int coef,int expon)
{
	setPolynomial(int coef,int expon);
} 

//cofficient[]
// -1 ：不存在
// 0 ： 违规 
//
Polynomial::Polynomial(int exponn,int coeff)
{
	Polynomial.expon = new exponn;
	Polynomial.coef[] = new coeff[Polynomial.expon]; 
	setPolynomial(int Polynomial.coef,int Polynomial.expon);
}

//
void Polynomial::setPolynomial(int exponn,int *coeff)
{
	//intiate
} 

void Polynomial::printPolynomial(int exponn,int *coeff)
{
	//  expon : 指数 exponent
   //	coef[] :  x的 n次系数 coefficient
	int n = exponn;
	cout<<"多项式为："
	for(;n<0;n--){
		while (coef[n]==0) continue;
		cout<<""
	}
}

int main()
{
	Polynomial p;
	Polynomial()
}
