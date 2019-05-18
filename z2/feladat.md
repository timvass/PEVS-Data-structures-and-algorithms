Z-2 Stack

3 stack lesz benne, s1, s2 és s3. s1 és s2 az elején egyforma lesz, az s2-bol eleszítem az s3-at, fordított sorrendben. 
Majd osszehasonlítom az s1-et az s3-mal.

char stack s1, s2, s3 
s1 ? s2 -> s3 hátulról
abcd dcba


Palindrómom sa nazýva reťazec znakov, ktorý sa číta rovnako zpredu ako aj zo zadu v prípade, že sa ignorujú medzery medzi písmenami, punktuácia a rozdiel medzi veľkými a malými písmenami.


Príklady:


1. Slovo „Level“
2. Veta, ktorú povedal Napoleon, keď išiel do vyhnanstva na Elbu.
„Able was I, ere I saw Elba“.


Napíšte interaktívny program, ktorý opakovane vypíše svoju ponuku (menu) pre užívateľa na obrazovku a pri jednej zo svojich možností načíta reťazec z klávesnice a rozhodne o ňom výpisom na monitor, či sa jedná o palindróm.


Zahrňte následujúce možnosti v rámci interakcie s užívateľom:
```
a....Vytvor dva nové a prázdne zásobníky
// toto sa volá iba raz na začiatku programu
b... Vyprázdni obsah v oboch zásobníkoch
c... Načítaj nový reťazec z klávesnice do prvého zásobníka a vytvor aj druhý zásobník d... Vypíš obsah prvého zásobníka
e... Vypíš obsah druhého zásobníka
// druhý zásobník obsahuje vstupný reťazec v obrátenom poradí písmen
f... Určí, či daný reťazec je palindrómom
x... Ukonči program.
```
Vstupom do tohto programu je jedna z hore uvedených možnosti a-f, x zadaná užívateľom cez klávesnicu v rámci nekonečnej slučky až kým užívateľ neukončí program cez voľbu ’x’. Program po načítaní danej voľby prevedie príslušnú operáciu a vypíše svoj výstup na monitor a do textového súboru vystup.txt.


Vyžaduje sa dôsledné používanie tried v C++ a hlavičkového súboru <iostream.h> pre vstup z klávesnice resp. <fstream.h> pre výstup do súboru. Hlavnou dátovou štruktúrov programu bude ADT zásobník (stack) presne tak, ako bol špecifikovaný na druhej prednáške z predmetu „Programovacie techniky“. Jeho špecifikácia sa bude nachádzať v hlavičkovom súbore: stack.h a jeho implementácia v súbore: stack.cpp. Naviac dátová (private) časť zásobníka bude obsahovať reťazec implementovaný ako pole znakov dĺžky 21. Reťazec sa po načítaní programom zapíše do prvého zásobníka. Vzápätí použitím obsahu prvého zásobníka sa reťazec zapíše aj v obrátenom poradí znakov do druhého zásobníka. Musia sa výhradne používať iba operácie zásobníka špecifikované v súbore stack.h pri práci so zásobníkom. Vyžaduje sa správny štýl programovania a v prípade potreby aj primeraný komentár. 


Zvláštna pozornosť sa
bude venovať pretečeniu a podtečeniu zásobníka. Tieto prípady budú ošetrené pomocou príslušného chybového hlásenia. Program bude navrhnutý ako čisto objektovo orientovaný a musí byť funkčný, a zároveň riadne otestovaný v rámci svojho main-programu t.j. testovacieho drajveru palindrome.cpp.


Predpokladajte, že vstupný reťazec sa skladá iba z písmen anglickej abecedy, poprípade z medzier a z punktuácie tak ako je to uvedené v úvodných príkladoch.


**ODOVZAJTE (resp. ako prílohu do e-mailu)

1. odladený zdrojový kód: stack.h, stack.cpp a palindrome.cpp 
2. textový súbor s vytlačeným zoznamom vystup.txt
3. osobná prezentácia na cvičení.
(poprípade aj na papieri)
alebo

1. odladený zdrojový kód: stack.h, stack.cpp a palindrome.cpp a dátový súbor vystup.txt na USB kľúči.

Špecifikácia zásobníka bstack.h
```
const MAX_LENGTH = 51;
class CharStack { public:
// bstack.h ... špecifikácia zásobníka
CharStack();
bool IsEmpty() const;
bool IsFull() const;
void Push( /* in */ char ch); void Pop( );
char Top( ) const;
private:
char data[MAX_LENGTH];
int top; };
```
