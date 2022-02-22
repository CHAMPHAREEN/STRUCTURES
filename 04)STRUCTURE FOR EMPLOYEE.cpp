/*DEFINE A STRUCTURE BY NAME EMPLOYEE WHICH INCLUDES EMPLOYEE NAME,NUMBER,JOINING YEAR AND SALARY.
WRITE A PROGRAM TO READ DETAILS OF N EMPLOYEES AND ADD BONUS OF RUPEES 1000 TO THE EMPLOYEES WHOSE SERVICE IS GREATER THEN 10 YEARS.
DISPLAY THE EMPLOYEE DETAILS*/
#include<stdio.h>
struct emp
{
	int eno,jy,salary;
	char s[20];
};
int main()
{
	int n;
	printf("ENTER VALUE FOR N:");
	scanf("%d",&n);
	struct emp c[n];
	int i,jy,salary;
	printf("Name,Number,Joining Year and Salary");
	for(i=0;i<n;i++)
	{
		scanf("\n%s\n%d\n%d\n%d",&c[i].s,&c[i].eno,&c[i].jy,&c[i].salary);
	if(c[i].jy<2012)
	{ 
	   c[i].salary+=1000;
	}
}
		for(i=0;i<n;i++)
	{
		printf("\n%s\n%d\n%d\n%d",c[i].s,c[i].eno,c[i].jy,c[i].salary);
	}
}

