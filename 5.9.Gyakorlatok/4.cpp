/*
4. (*1) Írjunk egy swap nevû függvényt, amely két egészt cserél fel. Használjunk
int* típust a paraméterek típusaként. Írjunk egy másik swap-et is, melynek para-
méterei int& típusúak.
*/
//vegre egy feladat



void swap(int* b, int* c){
	int temp = *b;
	*b = *c;
	*c=temp;
}

void swapr(int &b, int &c){
	int temp = b;
	b = c;
	c=temp;
}

int main(int argc, char const *argv[])
{
	int a = 1, b = 2;

	swap(&a,&b);
	swapr(a,b);


	return 0;
}