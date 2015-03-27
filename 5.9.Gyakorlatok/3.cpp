/*3. (*1) Használjunk typedef-et a következõk meghatározására: unsigned char,
const unsigned char, egészre hivatkozó mutató, karakterre hivatkozó mutatóra
hivatkozó mutató, karaktertömbökre hivatkozó mutató; 7 elemû, egészre hivat-
kozó mutatókból álló tömb; 7 elemû, egészre hivatkozó mutatókból álló tömbre
hivatkozó mutató; egészre hivatkozó mutatókat tartalmazó 7 elemû tömbökbõl
álló 8 elemû tömb. */



typedef unsigned char uchar;

typedef const unsigned char cuchar;

typedef int* pint;

typedef char** cpp;

typedef char *cpa[];

typedef int *asevenp[7];

typedef int **tomb[7];

typedef int* tombb[8][7]; //egészre hivatkozó mutatókat tartalmazó 7 elemû tömbökbõl álló 8 elemû tömb.


int main(int argc, char const *argv[])
{
	
	return 0;
}