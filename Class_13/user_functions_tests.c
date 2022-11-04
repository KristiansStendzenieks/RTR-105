// lietotāju funkcijas tiek pielietotas vairākkārtējai vienu un
// to pašu koda fragmentu pildīšanai (pašas koda rindiņas ir
// aprakstītas tikai vienu reizi)

#include<stdio.h>
               // funkcijas_datu_tips funkcijas_vaards(); - tā ir deklarēšana
               // funkcijas_datu_tips funkcijas_vaards(){} - tā ir definēšana

void dialogs() // tāpat kā mainīgājiem, funkcijai ir datu tips
          // funkcijas datu tips parasti ir saskaņots ar atgriežama (return)
          // lieluma (mainīgais vai izteiksme) datu tipu
          // ja nav paredzēts, ka funckija kaut ko atgriezis, tad datu tips - void
 {
 char c_dialogs_local;

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ievadītais skaitlis (izdruka no dialogs): %hhd\n",c_dialogs_local);
 }

char dialogs_with_return()
 {
 char c_dialogs_local;

 printf("\nCienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ievadītais skaitlis (izdruka no dialogs_with_return): %hhd\n",c_dialogs_local);

 return c_dialogs_local; // tiek atgriezta mainīgā c_dialogs_local vērtības kopija
                         // vērtība tiek atgriezta uz to līmeni (funkciju), no
                         // no kuras notika funkcijas dialogs_with_return izsaukšana
 }

char dialogs_with_arguments(char c_dialogs_argument) // pēc būtības arguments(i)
                                                     // ir tie pašie mainīgie
                                                     // (char arg1, char arg2)
                                                     // katram argumentam jānorada datu tips
 {
 printf("\nIepreikšējais ievadītais skaitlis (izdruka no dialogs_with_arguments): %hhd\n",c_dialogs_argument);
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_argument);
 printf("Ievadītais skaitlis (izdruka no dialogs_with_arguments): %hhd\n",c_dialogs_argument);

 return c_dialogs_argument;
 }


int main()
 {
 //char c;
 char c_main_local;

/*
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c);
 printf("Ievadītais skaitlis: %hhd\n",c);
*/
 dialogs();

 {;;;;;;;} // kāds cits koda fragments
/*
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c);
 printf("Ievadītais skaitlis: %hhd\n",c);
*/
 dialogs();

 c_main_local = dialogs_with_return();
 printf("Ievadītais skaitlis (izdruka no main): %hhd\n",c_main_local);

 c_main_local = dialogs_with_arguments(c_main_local);
 printf("Ievadītais skaitlis (izdruka no main): %hhd\n",c_main_local);

 return 0;
}
