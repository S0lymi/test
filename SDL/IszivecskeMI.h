/*readme TLDR
Szerkessz bele szabadon kedved szerint.
Ha valami elv�r�st t�masztan�l a .h fel�(pl.: �j funkci�) de nem �rod meg azonnal, csak kommenteld oda, a f�ggv�ny deklar�ci�t �s az elv�rt m�k�d�st,
valaki majd megcsin�lja. + a neved sem �rt, hogy tudjuk kit kell k�rdezni, ha valami nem tiszta.
Ha majd t�bb dolog lesz legyen IszivecskeMI.cpp is mert az �gy szebb�sjobb.
Az SDL-el kapcsolatban �rtam kicsit a readme-ben.
K�rd�s lenne k�rdezzetek nyugodtan val�sz�n� nem tudok seg�teni de tal�n igen.
Solymi
*/


#ifndef IszivecskeMI_H
#define IszivecskeMI_H

#include <iostream>
#include <string>

void WaitInput(std::string*s) // egyel�re csak visszaadja amit be�rsz console-ba std::string t�pusban
{
	std::getline(std::cin,*s);	
}


#endif