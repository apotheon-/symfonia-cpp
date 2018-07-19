# symfonia-cpp
Przerobienie materiału z książek Jerzego Grębosza

## NOTATKI
Goto używać tylko do uciekania z wielokrotnie zagnieżdżonych pętli

extern <typ> <nazwa> - informujemy że zmienna już gdzieś istnieje

TYP:			BITY:	BAJTY:	ZAKRES:
char			8		1		-128 do 127
unsigned char	8		1		0 do 255
wchar_t			16		2		0 do 65535		
short			16		2		-32768 do 32767
unsigned short	16		2		0 do 65535
int				32		4		-2.147.483.648 do 2.147.483.647
unsigned int	32		4		0 do 4.294.967.295
float			32		4		-3.4E+38 do 3.4E+38
double			64		8		-1.7E+308 do 1.7E+308
long double		80		10		-3.4E+4932 do 3.4E+4932

TYPY ZŁOŻONE:
<typ> <nazwa>[<wielkość>] - tablica
<typ> *<nazwa> - wskaźnik będący w stanie wskazywać na obiekty typu <typ>

STAŁE:
0<liczba_oktalna>
0x<liczba_hexdecymalna>
<liczba>L - liczba traktowana jako long
<liczba>u - liczba traktowana jako unsigned
<liczba>.[liczba] - liczba traktowana jako double
<liczba>.[liczba]F - liczba traktowana jako float
<liczba>e<wykladnik> - notacja wykladnicza
L'<znak>' - znak typu wchar_t
L"<ciąg>" - ciąg typu wchar_t
ZNAKI SPECJALNE:
\b	backspace
\n	newline
\a	alarm
\0	null
\t	tabulator

namespace <nazwa> { zmienne } - zmienne w przestrzeni nazw
using namespace <namespace>
using namespace <namespace>::<nazwa>

::<zmienna> - odniesienie do zmiennej globalnej, gdy ta jest zaslonieta w danym scope

for(int i=0, int j=0;i<1337;i++,j+=2){}
while(wyrazenie){}
do{}while(wyrazenie)

const <typ> <nazwa> = <wartosc> //stałe, lepsze niż #define
register <typ> <nazwa> //kompilator bedzie staral sie trzymac zmienna w rejestrze procesora dla szybkiego dostepu (bez gwarancji). Nie mozna wskazywac na adres takiej zmiennej za pomoca wskaznika.
volatile <typ> <nazwa> //informuje kompilator że zmienna może w niezauważalny dla niego sposów ulegać zmianie (np. odczyty, wielowątkowość)
typedef <typ> <nowyTyp> //alias dla typu, pozwala umozliwienie zmiany typu wielu obiektow w jednym miejscu

enum <nazwa_enum> {	stan1, //0
				stan2 = 1,
				stan3 = 54,
				stan4, //55
				stan5 = stan4}; //55
<nazwa_enum> stany;
stany = stan1 // powoduje ze stany przybiera wartość 0

+ - * / //główne operandy
%		//operand modulo
c++		//postinkrementacja
++c		//preinkrementacja
< <= > >= != ==	//operatory relacji
!		//NOT
&&		//AND
||		//OR

<zmienna> << <ilość_miejsc>			//stratne przesunięcie bitowe w lewo (*=2)
<zmienna> >> <ilość_miejsc>			//stratne przesunięcie bitowe w prawo (dodatnie wypelnia 0, ujemne może 1) (/=2)
&		//bitowy AND
|		//bitowy OR
~		//bitowy NOT
^		//bitowy XOR

&<zmienna>		//zwraca adres zmiennej

[<zmienna> = ]<warunek> ? <wartość_true> : <wartość_false>	//jeżeli true, zwraca wartosc_true i analogicznie false

sizeof(<nazwa_typu>) lub sizeof(<nazwa_zmiennej>) //zwraca liczbę bajtów w danym typie

(<typ_na_który_rzutujemy>)<zmienna>		//stare rzutowanie, zmiana jednego typu w drugi

Nowe rzutowanie:
static_cast<<typ_na_który_rzutujemy>>(<zmienna>)	
dynamic_cast<<typ_na_który_rzutujemy>>(<zmienna>)	//jeżeli może to rzutuje, jak nie to zwraca wskaznik i rzuca wyjatek
const_cast<<typ_bez_const>>(<zmienna_const>) //usuwane by usuwać const lub volatile
reinterpret_cast<<typ_na_który_rzutujemy>>(<zmienna>)	//nie kompiluje sie w procedury CPU, to okreslenie ze <zmienna> ma traktowac jak rzutowany <typ>
	przyklad z wskaźnikami: adr_first = adr_second //nie uda się, bo wskazują na różne typy
							adr_first = reinterpret_cast<type_first*>(adr_second)

