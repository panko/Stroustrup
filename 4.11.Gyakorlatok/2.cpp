/*
2. (*1) §4.9 minden deklarációjára végezzük el a következõket: ha a deklaráció
nem definíció, írjunk hozzá definíciót. Ha a deklaráció definíció is, írjunk olyan
deklarációt, ami nem az.
*/
#include <string>
#include <complex>

struct Date { int d, m, y; };

int day(Date* p) { return p->d; }
template<class T> T abs(T a) { return a<0 ? -a : a; }

double sqrt(double);

void f()
{
int count = 1;
char* name = "Bjarne";
// ...
count = 2;
name = "Marian";
}

namespace NS { int a; }

int main(){

const char* ch;
ch = "a";

std::string s;
s = "asd";

int count = 1;
const double pi = 3.1415926535897932385;


char* name = "Natasa";
char* season[ ] = { "tavasz", "nyár", "õsz", "tél" };

struct Date { int d, m, y; };






typedef std::complex<short> Point;
struct User;
enum Beer { Carlsberg, Tuborg, Thor };





struct User;



struct User { /* ... */ };



extern int error_number = 1;










}
// this is a fckin useless exericise i dont even know why im doin this