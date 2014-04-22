#include <iostream>

using namespace std;

void print(){
	cout<<"print() --function print outside class "<<endl;
}

class Test
{
public:	

	Test(int a=1, int b=2){}
	void print(){
		cout<<"print() --class member function!"<<endl;
		::print();
	}
};


int main(void)
{
	Test test;
	test.print();

	return 0;
}
