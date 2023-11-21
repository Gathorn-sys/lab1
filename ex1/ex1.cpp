#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c = 'a',
		s[10] = "123456789"; 
	const char * t = "abcdefghi";
	cout << c << '*' << endl << s << endl << t << endl << ">" << t[10] << "<";
}