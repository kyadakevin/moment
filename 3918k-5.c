#include<stdio.h>

  int main()
{
	float electricity_bill,unit,bill,surcharg;
	printf("enter the unit=");
	scanf("%f",&unit);
	if(unit<=50)
	{
		bill=unit*0.50;
	}
	else if (unit<=150)
	{
		bill=+(unit-50)*0.75+25;
	}
	
    else if (unit<=250)
    {
	     bill=(unit-150)*1.20+100;
    }
    else
    { 
        bill=(unit-250)*1.50+220;
	}
	
	surcharg=bill*20/100;
	electricity_bill=bill+surcharg;
	printf("electricity_bill=%f",electricity_bill);
	
	
	
	
}
