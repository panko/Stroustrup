/*5. (*2) Mi a rendszerünkön a legnagyobb és legkisebb értéke a következõ típu-
soknak: char, short, int, long, float, double, long double és unsigned?*/

#include <iostream>
#include <cmath>
#include <limits> //i would rather use this than pow(2,sizeof(char)*8)-1

//selfnote: i probably should rewrite the main in a loop
int main(int argc, char const *argv[])
{
	int minc = std::numeric_limits<char>::min();	//i hadto hack here, it doesnt work otherwise
    unsigned maxc = std::numeric_limits<char>::max();
	std::cout << "Legkisebb char érték: " << minc << std::endl;
	std::cout << "Legnagyobb char érték: " << maxc << std::endl;

	std::cout << "Legkisebb short érték: " << std::numeric_limits<short>::min() << std::endl;
	std::cout << "Legnagyobb short érték: " << std::numeric_limits<short>::max() << std::endl;

	std::cout << "Legkisebb int érték: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "Legnagyobb int érték: " << std::numeric_limits<int>::max() << std::endl;

	std::cout << "Legkisebb long érték: " << std::numeric_limits<long>::min() << std::endl;
	std::cout << "Legnagyobb long érték: " << std::numeric_limits<long>::max() << std::endl;

	std::cout << "Legkisebb float érték: " << std::numeric_limits<float>::min() << std::endl;
	std::cout << "Legnagyobb float érték: " << std::numeric_limits<float>::max() << std::endl;

	std::cout << "Legkisebb double érték: " << std::numeric_limits<double>::min() << std::endl;
	std::cout << "Legnagyobb double érték: " << std::numeric_limits<double>::max() << std::endl;

	std::cout << "Legkisebb long double érték: " << std::numeric_limits<long double>::min() << std::endl;
	std::cout << "Legnagyobb long double érték: " << std::numeric_limits<long double>::max() << std::endl;

	std::cout << "Legkisebb unsigned érték: " << std::numeric_limits<unsigned>::min() << std::endl;
	std::cout << "Legnagyobb unsigned érték: " << std::numeric_limits<unsigned>::max() << std::endl;

	return 0;
}