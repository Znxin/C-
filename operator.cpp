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

��Ϊ�����д������������غ�����֧��ȥ��ǰ������ո������ַ�����

�����롰    sunny����ͨ�����غ��������Ϊ��sunny��
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
	char t[]; // t:����δ�ı���ַ��� 
	*this.t = this.id*; //�����ַ���id �ı�t����֤id��ֵ�������ı�
	int i = sizeof(t[])-1 //
	
	//�� �ַ�Ϊ�� continue 
	for (;i < 0 ;i --){
		while(t[i] =' ') continue;
		cout<<t[p->]; 
	}
}
