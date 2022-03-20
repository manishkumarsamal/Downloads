#include<stdio.h>
int main ()
{
	float GS, BS, TA, DA, HRA;
	printf("Enter the value of salary::- ");
	scanf("%f",&BS);
	if(BS>20000 && BS<=30000)
	{
		TA = (10*BS)/100;
		DA = (5*BS)/100;
		HRA = (15*BS)/100;
	}
	else if(BS>30000 && BS<=40000)
	{
		TA = (12*BS)/100;
		DA = (7*BS)/100;
		HRA = (11*BS)/100;
	}
	else if(BS>40000 && BS<=50000)
	{
		TA = (14*BS)/100;
		DA = (9*BS)/100;
		HRA = (19*BS)/100;
	}
	else
	{
		if(BS>50000)
		{
		TA = (16*BS)/100;
		DA = (11*BS)/100;
		HRA = (21*BS)/100;	
		}
		
	}
	GS = BS+TA+DA+HRA;
		printf("GROSS SALARY: %F",GS);
		return 0;
}
