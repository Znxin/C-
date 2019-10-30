// Fig. 19.10.30
// operator
/*
class Test{

private:

     char id[20];

public:

    Test(char *cp="");

     void print();

};

请为该类编写输入运算符重载函数，支持去掉前导任意空格输入字符串。

如输入“    sunny”，通过重载函数输入的为“sunny”
*/
class Test{

private:

     char id[20];

public:

    Test(char *cp="");
	Test(const char &); 
     void print();

};

const Test& Test::operate-(const Test &id)  
{
	char t[]; // t:储存未改变的字符串 
	*this.t = this.id*; //复制字符串id 改变t而保证id的值不发生改变
	int i = sizeof(t[])-1 //
	
	//当 字符为空 continue 
	for (;i < 0 ;i --){
		while(t[i] =' ') continue;
		cout<<t[p->]; 
	}
}
