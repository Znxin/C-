// Fig. 19.10.28
// Polynomial.h

/*
����һ������ʽ��Polynomial,���ڲ���һ�������ʾ�����ÿһ�������ϵ����ָ����
���һ���࣬�����ʵ��Ĺ��캯�������������Լ����úͻ�ȡ������

����������Ķ����ļ�Polynomial.h��ͷ�ļ��У������������س�Ա�����ľ���ʵ�֡� */

#ifndef PLOY_H
#define PLOY_H
 
 

//  expon : ָ�� exponent
//	coef[] :  x�� n��ϵ�� coefficient

//new delete ��̬���� 

class Polynomial
{
	private :
		int expon ; 
		int *coef[] ;
			
	public :
		Polynomial(int ,int );
		~Polynomial();//��������
		
		//set function
		void setPolynomial( int ,int *);
		
		//get function 
		int getExponent(); //return exponent
		int getCoefficient(); //return coefficient
		
		void printPolynomial();//print Polynomial
 } 
 
 
#endif
