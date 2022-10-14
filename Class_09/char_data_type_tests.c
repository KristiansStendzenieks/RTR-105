#include<stdio.h>

int main()
 {
 //nedrīkst izmantot mainīgos pirms deklarēšanas!
 char a; // mainīgā ar identifikatoru(vai vārdu) "a" deklarēšana
	 // ar identifikatoru a viennozīmīgi tiek sasaistīts kāds atiņas apgabals
	 // kur (vieta) un cik (izmērs)?
	 // uz jautājumu kur? (adrese) atbildēsim citā nodarbībā
	 // cik? - 1 byte, jo ... char
	 // komenārs par identifikatoru(vārdu) - drīkst saturēt burtus 
	 // (ir starpība starp lieliem un maziem burtiem - a nav A- 
	 // case sensitive), ciparusm bet nedrīkst sākties ar ciparu,
	 // var būt mnemonisks, piemeram - cilindra_tilpums
 printf("a mainīgā vērtība(kā simbols) uzreiz pēc deklarēšanas: %c\n",a);
 printf("a mainīgā vērtība uzreiz pēc deklarēšanas: %d\n", a);
 printf("a mainīgā vērtība uzreiz pēc deklarēšanas: #%x\n", a);
 printf("a mainīgā vērtība uzreiz pēc deklarēšanas: %o\n", a);
 //; ; ; ; ; ; ; ; ; ;// daudzi tukšie operatori

 //int a
 //nderīkst(šādi) pārdeklarēt manīgo

 //NB! mainīgā būtība - mainīties
 a = 89; // "=" - piešķiršanas operācija
	 // pa kerisi ir - 89 - atbilstoši no formējuma (pierakstam) tā ir 
	 // int tipa (4 bytes) konstante pierakstīta, izmantojot decimālu skaitīšanas sistēmu => 89 = 64(2^6)+16(2^4)+8(2^3)+1(2^0)
	 // 0000 0000 0000 0000 0000 0000 0101 1001
	 // a = 89; -> mainīgā a 1 baitā tiek ierakstīts 0101 1001
 printf("a mainīgā vērtība(kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība(dec) uzreiz pēc piešķiršanas: %d\n", a);
 printf("a mainīgā vērtība(hex) uzreiz pēc piešķiršanas: %#x\n", a);
 printf("a mainīgā vērtība(oct) uzreiz pēc piešķiršanas: %o\n", a);

 a = 0x4c;
 printf("a mainīgā vērtība(kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība(dec) uzreiz pēc piešķiršanas: %d\n", a);
 printf("a mainīgā vērtība(hex) uzreiz pēc piešķiršanas: %#x\n", a);
 printf("a mainīgā vērtība(oct) uzreiz pēc piešķiršanas: %#o\n", a);

a = 160;
 // char -> signer char => -128 ... 0 ... 127
 // 160(dec) -> 128(2^7)+32(2^5)-> 0000 0000 0000 0000 0000 0000 1010 0000
 // mūsu (iekš a) rīcībā ir (1)010 000 => ir "-" zīme => nākamie biti pa tiešo
 // uzreiz netiek pārveidoti par dec
 // (1)010 000
 //	101 1111 - zīmes gadījumā atlikušos bitus invertē un + 1 - pieskaita bināro 1
 // un tikai tagad rēķina dec skaitli  1*2^6 + 1*2^5 = 96
 // tieši tāpēc gala rezultātis ir -96 
 printf("a mainīgā vērtība(kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība(dec) uzreiz pēc piešķiršanas: %d\n", a);
 printf("a mainīgā vērtība(hex) uzreiz pēc piešķiršanas: %#x\n", a);
 printf("a mainīgā vērtība(oct) uzreiz pēc piešķiršanas: %#o\n", a);


a = 320;
 printf("a mainīgā vērtība(kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība(dec) uzreiz pēc piešķiršanas: %d\n", a);
 printf("a mainīgā vērtība(hex) uzreiz pēc piešķiršanas: %#x\n", a);
 printf("a mainīgā vērtība(oct) uzreiz pēc piešķiršanas: %#o\n", a);

char b = 93; //definēšana - deklarēšana ar piešķiršanu
	     //prioritātā (tiks izpildīta pirmā) darbība šeit ir deklarēšana
 return 0;
 }
 
