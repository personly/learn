#include <vector>
#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

/*
std::string hexSwitch(unsigned char ch){
	static std::string str;
	switch (ch){
		case 0:
			return "0";
    		case 1:
			return "1";
    		case 2:
			return "2";
    		case 3:
			return "3";
    		case 4:
			return "4";
    		case 5:
			return "5";
    		case 6:
			return "6";
    		case 7:
			return "7";
    		case 8:
			return "8";
    		case 9:
        		return "9";
    		case 10:
        		return "a";
    		case 11:
        		return "b";
    		case 12:
        		return "c";
    		case 13:
        		return "d";
     		case 14:
        		return "e";
    		case 15:
        		return "f";
    		default:
			return "something error!";
    }
}

std::string charToHex(unsigned char ch)
{
	unsigned char a;
	unsigned char b;
	a = ch/16;
	b = ch%16;
//	printf("ch:%d a:%d, b:%d",ch, a, b);
	return (hexSwitch(a) + hexSwitch(b));	
}
*/


std::string hexSwitch(unsigned char ch){
    switch (ch){
        case 0:
                return "0";
            case 1:
                return "1";
            case 2:
                return "2";
            case 3:
                return "3";
            case 4:
                return "4";
            case 5:
                return "5";
            case 6:
                return "6";
            case 7:
                return "7";
            case 8:
                return "8";
            case 9:
                return "9";
            case 10:
                return "a";
            case 11:
                return "b";
            case 12:
                return "c";
            case 13:
                return "d";
            case 14:
                return "e";
            case 15:
                return "f";
            default:
            return "something error!";
    }
}

string charToHex(unsigned char ch)
{
    unsigned char a;
    unsigned char b;
    a = ch/16;
    b = ch%16;
    return (hexSwitch(a) + hexSwitch(b));
}

string vchToStr(std::vector<unsigned char> vch){
    string str;
    for(std::vector<unsigned char>::iterator it = vch.begin(); it != vch.end(); it++)
    {
        str = str + charToHex(*it);
    }

    return str;
}



int main(void)
{
	unsigned char temp[] = {
		0x5, 0xd7, 0x28, 0x3f, 0x7d, 0x83, 0xd0, 0x18, 
		0x38, 0x19, 0x3e, 0x3c, 0xc1, 0x3b, 0x6a, 0x1, 
		0x52, 0x8c, 0xcc, 0x63, 0xbc, 0xe6, 0xc1, 0x71, 
		0x11, 0x82, 0xa5, 0xd9, 0x18, 0x20, 0x24, 0x84, 
		0x92, 0xb, 0xa5, 0x55, 0x8f, 0x59, 0x3c, 0xa2, 
		0x1d, 0x85, 0x7a, 0xde, 0xaa, 0xaa, 0xa6, 0x99, 
	};	

	vector<unsigned char> vch;
	vch.resize(48);
	memcpy(&vch[0], temp, 48);
	std::string str;

	str = vchToStr(vch);

	std::cout<<str + "\n";		
}
