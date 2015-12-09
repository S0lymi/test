Arra gondoltam, neki lehetne állni a chatbothoz egy egyszerû SDL-es chatablakot megírni, úgyhogy elindítom ezt a kis side-projectet, valakinek
SDL-ezni támadna kicsit kedve nyugodtan írjon hozzá.
Egyszerû módja szerintem, ha headerként csak be kell majd #include-olni, úgyhogy van is itt egy .h(IszivecskeMI.h) amibõl remélhetõleg majd ez lesz.
lehetõség szerint legyen külön .h és .ccp is majd, mert úgy szebbésjobb.
Mindenki szerkesszen bele kedve szerint. Ha esetleg valamilyen függvényt/funkciót(pl.: adja vissza ha valaki épp gépel) szeretnétek tõle,
írjátok bele a .h-ba kommentbe a függvény deklarációját és az elvárt mûködést és ha nincs kedvetek azonnal megírni, késõbb majd látja valaki más
és talán megcsinálja, csak legyen tiszta mit akartok.(Esetleg célszerû lehet nevet is írni, hogy tudjuk kit kell kérdezni, ha kérdés van.)

Az SDL-rõl:
Indítványozom, hogy SDL 2.0.3-at használjunk hozzá.
Letöltés: https://www.libsdl.org/download-2.0.php
VS2012-höz és VS2013-hoz van prebuilt binary(a linken a Development libraries alatt) ami biztos mûködik, a többirõl nem tudok nyilatkozni.
megj.:VS2015-höz még nincs, mivel újitottak benne nem mûködik a régiekhez valóval sem, source-ból kell compile-olni ha azzal akarsz(ez mindenre igaz, ha nincs hozz mûködõ prebuilt).

A felrakásához segítség:
http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/index.php (VS2010-es tutoriallal megy a VS2012 és VS2013 is.)
https://wiki.libsdl.org/Installation