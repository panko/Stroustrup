/*
4. (*1.5) Írjunk programot, amely kiírja az 'a''z' betûket és a '0''9' számjegye-
ket, valamint a hozzájuk tartozó egész értékeket. Végezzük el ugyanezt a többi
kiírható karakterre is. Csináljuk meg ugyanezt hexadecimális jelöléssel.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "a-z" << std::endl;
	for (int i = 97; i < 123; ++i)
	{
		char c = i;	//chars a-z
		std::cout << c << "=" << i << std::endl;
	}

	std::cout << "0-9" << std::endl;;
	for (int i = 48; i < 58; ++i)
	{
		char cc = i;	//chars 0-9
		std::cout << cc << "=" << i << std::endl;;
	}

	std::cout << "Kiírható karakterek" << std::endl;
	for (int i = 1; i < 401; ++i)
	{
		char ccc = i;	//chars 0-9
		std::cout << ccc << "=" << i << std::endl;
	}

	std::cout << "a-z in hex" << std::endl;
	for (int i = 0x61; i < 0x7B; ++i)
	{
		char c = i;	//chars a-z hex
		std::cout << c << "=" << i << std::endl;
	}
	// i could print out the others too but im lazy
	return 0;
}