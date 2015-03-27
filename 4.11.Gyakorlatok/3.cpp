/*(*1.5) Írjunk programot, amely kiírja az alaptípusok, néhány szabadon választott
mutatótípus és néhány szabadon választott felsoroló típus méretét. Használjuk
a sizeof operátort.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "Kiírom néhány változó méretét." << std::endl;

	std::cout << "A bool mérete: " << sizeof(bool) << std::endl;

	std::cout << "A char mérete: " << sizeof(char) << std::endl;

	std::cout << "Az int mérete: " << sizeof(int) << std::endl;

	std::cout << "A double mérete: " << sizeof(double) << std::endl;

	int a = 10;
	int *p = &a;
	std::cout << "Az int* mérete: " << sizeof(p) << std::endl;

	double b = 10.4242312;
	double *q = &b;
	std::cout << "A double* mérete: " << sizeof(q) << std::endl;

	enum beer {good, better, kobanyai};
	std::cout << "Az enum mérete: " << sizeof(beer) << std::endl;


	return 0;
}