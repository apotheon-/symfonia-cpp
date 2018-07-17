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

namespace <nazwa> { zmienne } - zmienne w przestrzeni nazw