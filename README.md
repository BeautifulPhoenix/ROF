La Ruleta de la Sort
Has de crear un programa informàtic que emuli aquest famós programa de televisió. El joc
consisteix en que el concursant ha de endevinar un panell amb una frase i a partir d’una pista
mentre va acumulant diners a mesura que va encertant consonants.
El joc es va desenvolupant amb el concursant fent girar la ruleta i després dient una consonant, i
guanyarà tants diners com marqui la ruleta multiplicat per la quantitat de consonants que hi hagi
en el panell. Si falla una consonant, perd, i si alhora de resoldre no l’encerta, també perd. Només
s’emporta els diners si encerta.
També s’ha de tenir en compte que hi ha resultats especials, com el perdre torn, la bancarrota,
totes les vocals i el comodí. Cadascú amb el seu resultat especial.
A més, les vocals s’han de comprar amb els diners obtinguts, al preu de 25€, independentment
de la quantitat de vocals que hi hagi. Però si es compra una vocal que no està al panell, es perden
els 25€ i el torn.


Un exemple de partida seria:
Frase a endevinar és “aguantaria tot el dia”, i la pista és “Capità Amèrica”.
Tirar la ruleta, i surt 25€
El concursant tria la N
El taulell surt ----N----- --- -- --- i guanya 25€ per una consonant
Torna a tirar, i surt 50€
El concursant tria la T
El taulell passa a ----NT---- T-T -- --- i guanya 150€ (perquè hi ha tres T) i ja té un total de 175€
Decideix comprar vocal, i compra la A.
A---NTA--A T-T -- --A
I així anar fent fins que s’equivoqui o l’encerti.
La ruleta que utilitzem pel programa està formada per 28 grillons, distribuïts d’aquesta manera:



Resultat Quantitat
25€ 6
50€ 6
75€ 6
100€ 2
150€ 2
200€ 1
Bancarrota 1
Comodí 1
Totes les vocals 1
x2 1
1/2 1
Les quantitats monetàries són els valors pel que es multiplicarà la quantitat de consonants
encertades, i es sumaran al total. A més, les caselles especials afectaran quan es digui una
consonant correcte:
● Bancarrota: el concursant perd els diners acumulats i el panell, i té efecte immediat.
● Comodí: evita els efectes adversos de la Bancarrota i el 1⁄2.
● Totes les vocals: mostra totes les vocals del panell.
● x2: Doble la quantitat de diners del concursant.
● 1⁄2: Redueix a la meitat els diners del concursant.
En qualsevol cas, si no es diu una consonant correcte, es perd la ronda (excepte en bancarrota,
ASIX1-M3-Extraordinària
Sílvia Macho / Alfons Mallol
2UF1 – Programació estructurada
que es perd automàticament).
Les vocals s’han de comprar. Això es pot fer després d’haver dit una consonant correctament, i
comprar una vocal costa 25€ independentment de la quantitat de vocals que hi hagi. Però si es
compra una vocal incorrecte, el concursant ha perdut.
Un cop el concursant encerta el panell, es queda amb els diners i es pot passar al següent panell.
El programa
Es demana un programa que emuli aquest concurs (si tens la UF2, ha d’estar modulat en tres
fitxers i les corresponents funcions). Al principi mostrarà un menú que demani la informació del
concursant i també que prepari el panell.
1. Introduir dades del concursant
2. Preparar panells
3. Jugar
4. Sortir
A les dades del concursant s’ha de demanar nom i edat, i se li estableix un saldo inicial de 0€.
Al preparar panells hi haurà les següents opcions.
1. Carregar dades del fitxer/per defecte.
2. Introduir panell nou
3. Mostrar panells
4. Tornar
Si tens la UF3, hauràs de llegir les dades dels panells d’un fitxer. Aquestes dades són una
estructura de dos strings: frase i pista. Si no, el programa haurà de carregar una informació per
defecte estarà en el mateix codi.
Els panells es guardaran en un array de panells de tantes posicions com es cregui necessari.
A l’introduir un panell nou, es demanarà a l’usuari una frase i una pista, i s’afegirà al panell. A
més, si tens l’UF3, s’haurà de guardar en el fitxer.
Amb l’opció tres es poden veure tots els panells amb les seves pistes.
Al començar a jugar es triarà un panell a l’atzar i se’l mostrarà al concursant, amb la pista visible
i - enlloc de les lletres de la frase. Seguint l’exemple anterior, serà quelcom així:
---------- --- -- ---
ASIX1-M3-Extraordinària
Sílvia Macho / Alfons Mallol
3UF1 – Programació estructurada
Capità Amèrica
Després el concursant haurà de tirar la ruleta, i determinarem el resultat a l’atzar. Després
preguntem la consonant, aplicarem els efectes, i si té prou diners, preguntem si vol comprar vocal,
i cal tenir en compte que es pot comprar més d’una vocal. Després preguntarem si vol solucionar,
i en cas que ho vulgui, li preguntem la frase. Si encerta, ha guanyat, si no, ha perdut. També perd
automàticament si cau en bancarrota.
S’ha d’anar repetint fins que perdi o encerti.
A cada ronda, s’ha d’anar informant de tot per pantalla, per tant totes i cada una de les dades
s’han d’anar mostrant ...
IMPORTANT: Aquells que només teniu la UF1 per recuperar, recordeu que haureu de fer l’activitat
fent servir printf, scanf i arrays de chars .... ja que és el que vam utilitzar en aquesta UF!!Resultat Quantitat
25€ 6
50€ 6
75€ 6
100€ 2
150€ 2
200€ 1
Bancarrota 1
Comodí 1
Totes les vocals 1
x2 1
1/2 1
Les quantitats monetàries són els valors pel que es multiplicarà la quantitat de consonants
encertades, i es sumaran al total. A més, les caselles especials afectaran quan es digui una
consonant correcte:
● Bancarrota: el concursant perd els diners acumulats i el panell, i té efecte immediat.
● Comodí: evita els efectes adversos de la Bancarrota i el 1⁄2.
● Totes les vocals: mostra totes les vocals del panell.
● x2: Doble la quantitat de diners del concursant.
● 1⁄2: Redueix a la meitat els diners del concursant.
En qualsevol cas, si no es diu una consonant correcte, es perd la ronda (excepte en bancarrota,
ASIX1-M3-Extraordinària
Sílvia Macho / Alfons Mallol
2UF1 – Programació estructurada
que es perd automàticament).
Les vocals s’han de comprar. Això es pot fer després d’haver dit una consonant correctament, i
comprar una vocal costa 25€ independentment de la quantitat de vocals que hi hagi. Però si es
compra una vocal incorrecte, el concursant ha perdut.
Un cop el concursant encerta el panell, es queda amb els diners i es pot passar al següent panell.
El programa
Es demana un programa que emuli aquest concurs (si tens la UF2, ha d’estar modulat en tres
fitxers i les corresponents funcions). Al principi mostrarà un menú que demani la informació del
concursant i també que prepari el panell.
1. Introduir dades del concursant
2. Preparar panells
3. Jugar
4. Sortir
A les dades del concursant s’ha de demanar nom i edat, i se li estableix un saldo inicial de 0€.
Al preparar panells hi haurà les següents opcions.
1. Carregar dades del fitxer/per defecte.
2. Introduir panell nou
3. Mostrar panells
4. Tornar
Si tens la UF3, hauràs de llegir les dades dels panells d’un fitxer. Aquestes dades són una
estructura de dos strings: frase i pista. Si no, el programa haurà de carregar una informació per
defecte estarà en el mateix codi.
Els panells es guardaran en un array de panells de tantes posicions com es cregui necessari.
A l’introduir un panell nou, es demanarà a l’usuari una frase i una pista, i s’afegirà al panell. A
més, si tens l’UF3, s’haurà de guardar en el fitxer.
Amb l’opció tres es poden veure tots els panells amb les seves pistes.
Al començar a jugar es triarà un panell a l’atzar i se’l mostrarà al concursant, amb la pista visible
i - enlloc de les lletres de la frase. Seguint l’exemple anterior, serà quelcom així:
---------- --- -- ---
ASIX1-M3-Extraordinària
Sílvia Macho / Alfons Mallol
3UF1 – Programació estructurada
Capità Amèrica
Després el concursant haurà de tirar la ruleta, i determinarem el resultat a l’atzar. Després
preguntem la consonant, aplicarem els efectes, i si té prou diners, preguntem si vol comprar vocal,
i cal tenir en compte que es pot comprar més d’una vocal. Després preguntarem si vol solucionar,
i en cas que ho vulgui, li preguntem la frase. Si encerta, ha guanyat, si no, ha perdut. També perd
automàticament si cau en bancarrota.
S’ha d’anar repetint fins que perdi o encerti.
A cada ronda, s’ha d’anar informant de tot per pantalla, per tant totes i cada una de les dades
s’han d’anar mostrant ...
IMPORTANT: Aquells que només teniu la UF1 per recuperar, recordeu que haureu de fer l’activitat
fent servir printf, scanf i arrays de chars .... ja que és el que vam utilitzar en aquesta UF!!
