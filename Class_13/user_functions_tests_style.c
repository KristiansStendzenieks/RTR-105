
#include<stdio.h>

char dialogs(); // funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg);
void test1(int a, int b, int c); // atslēgas vārds void nozīmē, ka return nebūs
void test2(int a, double b); // datu tips jāpien katram argumentam

int main()
 {
 //char c;
 char c_main_local;
 c_main_local = 10;
 c_main_local = dialogs();

 printf("Ir ievadīts skaitlis (izdruka no main funkc.): %d\n",c_main_local);

 dialogs();

 int i_main = 1;
 dialogs_i(i_main);
 i_main++;
 dialogs_i(i_main);

 return 0;
 }
// ---------------------------user-functions--------------------------------------------------


char dialogs()
 {
 char c_dialogs_local;
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkc.): %d\n",c_dialogs_local);
 return c_dialogs_local;
 }

char dialogs_i(int i_dialogs_arg)
 {
 char c_dialogs_local;
 printf("\nFunkcija dialogs_i tiek izpildīta %d. reizi:\n",i_dialogs_arg);
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkc.): %d\n",c_dialogs_local);
 return c_dialogs_local;
 }

