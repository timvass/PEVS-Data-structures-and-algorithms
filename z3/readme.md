# Z3 - Queue
Program pokladne.cpp
1.3. 2019
Úloha: Simulácia čakania ľudí pri pokladni v supermarkete
Napíšte program v jazyku C++, ktorý bude používať menu s dole uvedenými možnosťami simulujúci čakanie ľudí pri pokladni v supermarkete. Predpokladajte, že v supermarkete majú určitý počet pokladní, nazvime ho MAX = 5, ktoré môžu byť súčasne v prevádzke. Obvykle však nie sú všetky naraz otvorené. Simulujte v náhodných časových intervaloch príchod ľudí k pokladniam (postupne, prvý príde k prvej otvorenej pokladni, druhý k druhej, ..., po človeku, čo sa zaradil do radu u poslednej otvorenej pokladne, ďalší sa opäť zaradí k prvej otvorenej, ...). V určitých intervaloch (tiež nemusia byť pevne stanovené, ale náhodné), simulujte obslúženie ľudí pri pokladni (ako ľudia postupne odchádzajú). Používateľ programu môže zatvárať a otvárať pokladne. V prípade otvorenia pokladne sa umožní novo prichádzajúcim ľuďom postaviť sa do radu pri tejto pokladni, tak ako by to urobili skutoční zákazníci. V prípade uzatvorenia pokladne, všetci ľudia, čo pri pokladni stáli, sa zaradia na koniec rád pri otvorených pokladniach (podobne, ako keď noví ľudia prichádzajú).
VSTUP
Vstup do programu sa skladá z dvoch častí: z textového súboru „pokladne.txt“, ktorý sa načíta programom na začiatku a zo série vstupov z klávesnice.
1. Textový súbor „pokladne.txt“ má následujúci formát: číslo_pokladne počet_čakajúcich mená_čakajúcich
     bodkočiarka.
2. Dotazy budú zadávané interaktívne z klávesnice a ich formát
je určený následovným menu:
<open>
<close>
<opened cash desks>
<add customer>
......... otvor pokladňu číslo k
......... zavri pokladňu číslo k
......... vypíš zoznam otvorených
          pokladní
......... pridaj kupujúceho
<process customer>
<write out customers>
<stop>
       pomocou jeho krstného mena
......... vybav kupujúceho u
          pokladni číslo k
......... vypíš kupujúcich u
          pokladni číslo k
......... ukonči daný program.
V každom jednom dotaze užívateľ zadá príslušný údaj potrebný pre jeho prevedenie.
VÝSTUP
Program bude vypisovať každú zmenu stavu u príslušnej pokladni na monitor a tiež po svojom ukončení stav všetkých pokladní v supermarkete sa uschová do textového súboru „pokladne.txt“.
ZAOBCHÁDZANIE S CHYBAMI
1. Nepovoľte otvoriť už otvorenú pokladňu.
2. Nepovoľte uzavrieť už uzavretú pokladňu.
3. Nepovoľte pridať kupujúceho do už uzavretej pokladni.
4. Nepovoľte pridať kupujúceho do už plného supermarketu.
5. Nepovoľte pridať viac ako 10 kupujúcich do jednej rady.
6. Podajte hlásenie užívateľovi o neexistujúcom vstupnom súbore.
7. Ostatné chyby ignorujte.
DÁTOVÉ ŠTRUKTÚRY
Rada čakajúcich ľudí pri pokladni sa musí špecifikovať ako abstraktný údajový typ (AUT) spolu s príslušnými operáciami použitím tried vC++. Môžete predpokladať, že sa vnej nachádza najviac 10 rôznych kupujúcich.
ODOVZAJTE (na papieri)
1. špecifikáciu AUT v súbore simulacia.h a odladený zdrojový kód simulacia.cpp programu
2. hlavný program pokladne.cpp určený na testovanie daného AUT 3. dátový súbor: pokladne.txt vytlačený na papieri
4. osobná prezentácia na cvičení alebo ako prílohu do e-mail

1. špecifikáciu AUT v súbore simulacia.h a odladený zdrojový kód simulacia.cpp program
2. hlavný program pokladne.cpp určený na testovanie daného AUT 3. dátový súbor: pokladne.txt
alebo
1. špecifikáciu AUT v súbore simulacia.h a odladený zdrojový kód simulacia.cpp, pokladne.cpp a dátový súbor: pokladne.txt na USB klúči.
