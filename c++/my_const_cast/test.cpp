#include <iostream>

using namespace std;

class T{
public:
	T(){}
	int a;
};

void foo()
{
	const T t1;
	T *t2 = const_cast<T*> (&t1);
	T &t3 = const_cast<T&> (t1);

	t2->a = 100;
	cout<<t1.a<<endl;
	cout<<t2->a<<endl;
	cout<<t3.a<<endl;

	t3.a = 200;
	cout<<t1.a<<endl;
	cout<<t2->a<<endl;
	cout<<t3.a<<endl;
}


int main() 
{
	foo();

	return 0;
}
