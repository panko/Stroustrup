/*7. (*1,5) Készítsünk egy táblázatot, amely a hónapok neveibõl és napjaik számá-
ból áll. Írjuk ki a táblázatot. Csináljuk meg mindezt kétszer: egyszer használjunk
karaktertömböt a nevek és egy tömböt a napok számára, másodszor használ-
junk struktúrákból álló tömböt, ahol az egyes adatszerkezetek a hónap nevét és
a benne levõ napok számát tárolják.*/

#include <iostream>
#include <string>

struct monthy
{
	std::string honap;
	int nap;
} honapnap[12];


void kiirc(const char** tombhonap, const int* tombnap){
	for (int i = 0; i < 12; ++i)
	{
		std::cout << *tombhonap << " : " << *tombnap << std::endl;
		tombhonap++;tombnap++;
		
	}
}

void kiircpp(monthy* honapnap){
	for (int i = 0; i < 12; ++i)
	{
		std::cout << honapnap[i].honap << " : " << honapnap[i].nap << std::endl;
		
	}
}


int main(int argc, char const *argv[])
{
	const char* tombhonap[12]={"Január", "Február", "Március", "Április", "Május", "Június", "Július", "Augusztus", "Szeptember", "Október", "November", "December"};
	const int tombnap[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	kiirc(tombhonap,tombnap);	//tárám 1

	for (int i = 0; i < 12; ++i)	//feltoltom a strukturaim a tombben
	{
		honapnap[i].honap=tombhonap[i];
		honapnap[i].nap=tombnap[i];
	}
	kiircpp(honapnap);			//tárám 2

	return 0;
}