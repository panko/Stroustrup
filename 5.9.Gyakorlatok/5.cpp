/*5. (*1,5) Mi az str tömb mérete a következõ példában?
char str[ ] = "rövid karakterlánc";
Mi a "rövid karakterlánc" hossza?*/
#include <iostream>
#include <string.h>
#include <string>
char str[ ] = "rövid karakterlánc";	
int main(int argc, char const *argv[])
{
	std::cout << sizeof(str) << std::endl;
	std::cout << strlen(str) << std::endl;	//we have got some serious problems, the old c i think dosent use utf-8, so i got bad numbers
	std::string s = "rövid karakterlánc";
	std::cout << s.std::string::length() << std::endl;	//ok so this is bad too, i should use some kind of special library, i like to be hungarian
	return 0;
}
