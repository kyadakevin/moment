#include<stdio.h>
#include<conio.h>

main()
{

   char day;
   clrscr();

   printf("\nenter m to monday ");
   printf("\nenter t to tuesday");
   printf("\nenter w to wednesday");
   printf("\nenter T to thursday");
   printf("\nenter f to friday");
   printf("\nenter s to saturday");
   printf("\nenter S to sunday");
   printf ("\nenter the day");
   scanf("%c",&day);

   switch(day)
  {


  case 'm' :
	       printf("mondsy");
	       break;
  case 't' :
	       printf("tuesday");
	       break;
  case 'w' :
	       printf("wednesday");
	       break;
  case 'T' :
	       printf("thursday");
	       break;
  case 'f' :
	       printf("friday");
	       break;
  case 's' :
	       printf("saturday");
	       break;
  case 'S' :
	       printf("sunday");
	       break;


 default:

	      printf("plz enter proper choice value");

 }

  getch();
}