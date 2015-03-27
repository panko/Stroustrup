/*1. (*1) Vezessük be a következõket: karakterre hivatkozó mutató, 10 egészbõl álló
tömb, 10 egészbõl álló tömb referenciája, karakterláncokból álló tömbre hivat-
kozó mutató, karakterre hivatkozó mutatóra hivatkozó mutató, konstans egész,
konstans egészre hivatkozó mutató, egészre hivatkozó konstans mutató. Mind-
egyiknek adjunk kezdeti értéket.*/

int main(int argc, char const *argv[])
{
	char a = 50;
	char* p = &a;
	int tomb[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int (&tombref)[10] = tomb;
	char*  strings[10] = {"asd","asd","asd","asd","asd","asd","asd","asd","asd","asd"};	//i get a lotof warnings, i dont know what to do :D 
	char* *pp = strings;
	const int i = 10;
	const int* ip = &i;
	int const* icp = &i;

	return 0;
}

