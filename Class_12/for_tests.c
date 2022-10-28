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
// for(1.;2.5.8.11.;4.7.10.) //darbibu izpildes seciba
// 3.6.9. // tikmēr, kamēr izteiksmes daļā (starp ;;) nebūs false
//
//Tāpat kā iepriekš viena_darbība vai pirmā_darbība utt.
// tik regulāri izpildītas, ja izteiksmes rezultāts
// ir
// "true" - "1" rezultāts kaut vienā bitā
// "false" - "0" visos rezultāta bitos
// for( ; izteiksme ; ) viena_darbiiba;
// for( ; izteiksme ; )
// viena_darbiiba;
// for( ; izteiksme ; ) {pirmaa_darbiiba; otraa_darbiiba;}
// for( ; izteiksme ; )
// {
// pirmaa_darbiiba;
// otraa_darbiiba;
// }
#include<stdio.h>

int main()
 {
 char c;

 for(c=10 ; c>=0 ; c--)
 {
	printf("c = %d\n" ,c);
//c = -7;
//c--; // c = c - 1; // c -= 1; // c += -1; // --c; 
 //if(c == 5)
 // break;
}

 printf("izdruka ar printf aiz cikla: \n");
 printf("c = %d\n",c);

 return 0;
 }
