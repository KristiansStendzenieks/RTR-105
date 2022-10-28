// do viena_darb; while(izteiksme); //NB! do ... while gadījumā
//					pēc while iekavām () ir ;
//
// do
//	viena_darb;
//	while(izteiksme);

//	do {pirmaa_darb; otraa_darb;} while(izteikmse);

// do
// {
// pirmaa_darb;
// otra_darb;
// }




//Ciklu konstrukcija ļauj vairākas reizes pēc kārtas izpildīt
// vienas un tās pašas koda rindas
// (alternatīva - programmētājs manuāli atkārto rindu rakstīšanu)
// kodēšanai - http://www.onlinegdb.com/online_c_compiler
//		tai skaitā pielietus "Beutify"
// while - kamēr
// do .. while - darīt kamēr
// for - darīt līdz
//
//while(izteiksme) viena_darbība;
//	 tāpat kā bija if(izteiksme) viena_darbība;
//while(izteiksme)
//viena_darbība;
//while(izteiksme) {pirmā_darbība; otrā_darbība;}
//while(izteiksme)
// {
// pirmā_darbība
// otrā_darbība
// }
//
//Tāpat kā iepriekš viena_darbība vai pirmā_darbība utt.
// tik regulāri izpildītas, ja izteiksmes rezultāts
// ir
// "true" - "1" rezultāts kaut vienā bitā
// "false" - "0" visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c = -11;

 do
 {
 printf("c = %d\n" ,c);
 while(c>=0)
 c--;
 }
//while(c)// c == ; c--;
 {

//c = -7;
//c--; // c = c - 1; // c -= 1; // c += -1; // --c; 
 if(c == 5)
  break;
}

 printf("izdruka ar prinf aiz cikla: \n");
 printf("printf aiz cikla.\n",c);

 return 0;
 }
