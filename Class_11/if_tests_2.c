// nosacījuma operators if tiek izmantots koda izpildes sazarošanai
// if(izteiksme) darbība_1_gab;
// if(izteiksme)
//	darbība_1_gab;
// nozīmē sekojošo - darbība_1_gab tiks izpildīta tad, kad
//			izteiksmes izpildīšanas rezultāts ir "true"
//			par "true" nozīmi - skat. iepriekšējo nodarbību
// if(izteiksme) {1_darbība; 2_darbība; utt.;}
// if(izteiksme)
//	{
//	1_darbība;
//	2_darbība;
//	...;
//	}
// ar {} apzīmē (jeb nodala) darbību bloku

// if(izteiksme) darbība_1_gab; else darbība_1_gab;
// if(izteiksme)
//	dabība_1_gab;
// else
//	savādāka_dabība_1_gab;

// if(izteiksme) {1_darbība; 2_darbība; ...;} else {1_s_darbība; ...;}
// if(izteiksme)
// 	{
// 	1_darbība;
// 	2_darbība;
// 	...;
// 	}
// else
//	{
// 	1_s_darbība;
//	...;
//	}
// else VIENMĒR "pieder" kādam if un atrodas vienas darbības vai dabību bloka "attālumā" no if
//	un tam NAV sava pārbaudāma izteksme

// ja vajag kaut ko "elif" veidīgo
// if(izteiksme_1)
//	{
//	; //  ;	- tukšs operators - neko nedara, bet laiku nedaudz patērē
//	}
// else
//	{
//	if(izteiksme_2)
//		{
//		;
//		}
//	}
#include<stdio.h>

int main()
 {
 int a,b;
 printf("Cienījamais lietotāj, lūdzu ievadi divus skaitļus: ");
 scanf("%d",&a);
 scanf("%d",&b);
 
 if(a>b)
	{
	printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
	}
 else
	{
	printf("Tavs ievadītais a(%d), nav lielāks par ievadīto d(%d)\n",a,b);
 if (a==b)
	printf("Vēl vairāk, a(%d), ir vienāds ar b(%d)\n",a,b);
 else
	printf("Vēl vairāk a(%d) ir mazāks par b(%d)\n",a,b);
 }
 return 0;
 }
