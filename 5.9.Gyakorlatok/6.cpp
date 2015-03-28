/*6. (*1) Készítsük el az f(char), g(char&) és h(const char&) függvényeket. Hívjuk
meg õket az 'a', 49, 3300, c, uc és sc paraméterekkel, ahol c char, uc unsigned
char és sc signed char típusú. Mely hívások megengedettek? Mely hívásoknál
vezet be a fordítóprogram ideiglenes változót?*/
#include <iostream>

void f(char){

}

void g(char&){

}

void h(const char&){

}


int main(int argc, char const *argv[])
{
	char c;
	unsigned char uc;
	signed char sc;

	f('a');
	//g('a');	//error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘char’
	h('a');

	f(49);
	//g(49);		//error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
	h(49);


	f(3300);	//warning: overflow in implicit constant conversion [-Woverflow]
	//g(3300);	//error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
	h(3300);	//warning: overflow in implicit constant conversion [-Woverflow]

	f(c);
	g(c);
	h(c);

	f(uc);
	//g(uc);	//error: invalid initialization of reference of type ‘char&’ from expression of type ‘unsigned char’
	h(uc);

	f(sc);
	//g(sc);	//error: invalid initialization of reference of type ‘char&’ from expression of type ‘signed char’
	h(sc);
	return 0;
}