// Fig. 19.10.28
// Polynomial.h

/*
开发一个多项式类Polynomial,类内部有一个数组表示各个项，每一项包含了系数和指数。
设计一个类，包含适当的构造函数，析构函数以及设置和获取函数。

请给出这个类的定义文件Polynomial.h。头文件中，请给出上述相关成员函数的具体实现。 */

#ifndef PLOY_H
#define PLOY_H
 
 

//  expon : 指数 exponent
//	coef[] :  x的 n次系数 coefficient

//new delete 动态数组 

class Polynomial
{
	private :
		int expon ; 
		int *coef[] ;
			
	public :
		Polynomial(int ,int );
		~Polynomial();//析构函数
		
		//set function
		void setPolynomial( int ,int *);
		
		//get function 
		int getExponent(); //return exponent
		int getCoefficient(); //return coefficient
		
		void printPolynomial();//print Polynomial
 } 
 
 
#endif
