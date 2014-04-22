#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(void){
	char *str = "hello world, bitcoin";

	vector<unsigned char>((const unsigned char*)str ,
	(const unsigned char*)str + strlen(str));

	return 0;
}
