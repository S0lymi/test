/*readme TLDR
Szerkessz bele szabadon kedved szerint.
Ha valami elvárást támasztanál a .h felé(pl.: új funkció) de nem írod meg azonnal, csak kommenteld oda, a függvény deklarációt és az elvárt mûködést,
valaki majd megcsinálja. + a neved sem árt, hogy tudjuk kit kell kérdezni, ha valami nem tiszta.
Ha majd több dolog lesz legyen IszivecskeMI.cpp is mert az úgy szebbésjobb.
Az SDL-el kapcsolatban írtam kicsit a readme-ben.
Kérdés lenne kérdezzetek nyugodtan valószínû nem tudok segíteni de talán igen.
Solymi
*/


#ifndef IszivecskeMI_H
#define IszivecskeMI_H

#include <iostream>
#include <string>

void WaitInput(std::string*s) // egyelõre csak visszaadja amit beírsz console-ba std::string típusban
{
	std::getline(std::cin,*s);	
}


#endif