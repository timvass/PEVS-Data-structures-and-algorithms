program 1edit.c

# Feladat: soros szerkesztő (kétszeresen láncolt lista)

Programozd le és ellenőrizd az `1edit` nevű soros szerkesztőt, C programnyelven.

## Feladatleírás:

A régebbi szövegszerkesztők sorosak voltak. Főként a szöveges, nem grafikus terminálokkal való munkánál használták. 
Mivel sorosak voltak, az adott fájl szövegét soros parancsok segítségével módosították.
Tipikus parancsaik lehetővé  teszik a szövegsorok beszúrását és törlését, illetve a szöveges sorokban való keresést.
A feladatban a programnak maximum 80 karakter hosszú sorokkal kell dolgoznia. A program figyeli az aktuális sort a szöveges fájlban,
és interaktív módon (realtime) meg kell valósítania a user által megadott parancsot.

### INPUT:
A program input a billentyűzetről érkezik, parancsok sorozataként. Minden parancs új sorban kezdődik, két nagybetűvel.
Érvényes parancsok a következők: `RE`, `IN`, `DL`, `MV`, `LA`, `SA` és `XT`.

Az `MV` parancs paramétere egy egész szám. A paramétert ugyanabba a sorba írjuk, legalább 1 szóközzel az `MV` parancsot követően.
Pl. `MV 4` - megváltoztatja a fájlban az aktuális sort.


Az `IN` parancs sorokat helyez be a fájlba az aktuális sor elé és

a vyžaduje si ako vstup nové riadky vkladaného textu ukončené na ďaľšom riadku cez „//”.
Príkaz DE zruší aktuálny riadok súboru pričom následujúci riadok sa stáva novým aktuálnym riadkom.
Príkaz „RE meno.txt“ načíta textový súbor nazývaný meno.txt do zreťazeného zoznamu.
Príkaz „SA meno.txt“ zapíše aktuálny stav súboru nachádzajúcom sa
v zreťazenom zozname do textového súboru.
Príkaz LA vypíše všetky riadky počnúc aktuálnym riadkom až do konca textového súboru na monitore.
Príkaz XT ukončí program ledit.
VÝSTUP
Výzva na každom riadku bude obsahovať jediný znak „>“, ktorý bude následovať za prázdnym riadkom. Po príkaze MV sa zobrazí nový aktuálny riadok. Ak aktuálny riadok sa nachádza za posledným riadkom súboru, potom sa zobrazí <<END>> ako aktuálny riadok. Príkaz LA zobrazí všetky riadky počnúc aktuálnym riadkom až do konca súboru.
Program bude zapisovať vstup aj výstup do programu na monitor a tiež aj do textového súboru „out.txt“. Celá interakcia s programom bude zápísaná do tohto súboru.
DÁTOVÉ ŠTRUKTÚRY
Treba použiť dynamický, jednoducho zreťažený zoznam, ktorý sa musí špecifikovať a implementovať v jazyku C. Vyžaduje sa v ňom dynamické prideľovanie a uvoľnovanie pamäte podľa potreby.
ZAOBCHÁDZANIE S CHYBAMI
1. Záporný MV príkaz pokúšajúci sa nastaviť aktuálny riadok pred prvý riadok súboru spôsobí, že prvý riadok súboru sa stane aktuálnym riadkom.
2. Kladný MV príkaz pokúšajúci sa nastaviť aktuálny riadok za posledný riadok súboru spôsobí, že symbol <<END>> sa stane aktuálnym riadkom.
3. DL príkaz rušiaci posledný riadok súboru spôsobí, že symbol <<END>> sa stane aktuálnym riadkom.
4. Neplatný dvojznakový príkaz sa bude ignorovať.
PRÍKLAD
Tu je príklad vzorového spustenia takéto programu ledit. Vstup užívateľa je znázornený tučnými písmenami.

>LA <<END>>
>IN
111 111 111 111 1111 222 222 222 222 2222 //
>MV -2
111 111 111 111 1111
>LA
111 111 111 111 1111 222 222 222 222 2222 <<END>>
>SA foo.txt >XT ODOVZAJTE
1. odladený zdrojový kód v súboroch: ledit.c, drajver.c vytlačený na papieri
2. dátový súbor: out.txt vytlačený na papieri 3. osobná presentácia na cvičení
alebo ako prílohu do e-mail
1. odladený zdrojový kód v súboroch: ledit.c, drajver.c
2. dátový súbor: out.txt alebo na USB klúči
1. odladený zdrojový kód v súboroch: ledit.c, drajver.c 2. dátový súbor: out.txt
POZNÁMKA
Súbor out.txt musí obsahovať všetky možné prípady nutné k úplnému testovaniu daného editora.
Jednoducho zreťazené zoznamy
const int MAX_LENGTH = 51;

struct NodeType;
typedef NodeType* NodePtr;
struct NodeType { char
NodePtr
NodePtr head; NodePtr actualPtr;
data[MAX_LENGTH]; next;
}
Dvojmo zreťazené zoznamy
const int MAX_LENGTH = 51;
struct DblNodeType {
char data[MAX_LENGTH]; DblNodeType* next;
DblNodeType* previous;
};
typedef DblNodeType* DblNodePtr; DblNodePtr actualPtr;


