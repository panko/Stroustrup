/*8. (*2) Futtassunk le néhány tesztet, hogy megnézzük, a fordítóprogram tényleg
egyenértékû kódot hoz-e létre a mutatók használatával és az indexeléssel való
tömbbejáráshoz (§5.3.1). Ha különbözõ mértékû optimalizálást lehet használni,
nézzük meg, hat-e és hogyan hat ez a létrehozott kód minõségére.*/

#include <iostream>

/*
void usage(){
	std::cout << "Usage: asmtest <option> (options can be:" << std::endl <<
	 "1: array stepping with pointers;" << std::endl << "2: array stepping with indexes;)" << std::endl;
}*/

int main()
{

/*	if (argc!=2)
	{
		usage();
		return 0;
	}*/
		int a;
		
		int tomb[]={0,1,2,3,4,5,6,7,8,9};
/*
	if (*argv[1]=='1')
	{
		std::cout << "1 lett" << std::endl;
	}

	else if (*argv[1]=='2')
	{
		std::cout << "2 lett" << std::endl;
	}
	else {
		std::cout << "its not 1 or 2" << std::endl;
	}*/
		for (int i = 0; i < 10; ++i)
		{
			a=tomb[i];
			
		}




	return 0;
}