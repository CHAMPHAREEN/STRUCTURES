//CREATE A STRUCTURE FOR TRAVELLER
#include<stdio.h>
struct traveller 
{
	int age,seat_no,train_no;
	char name[10],coach_no[2],reservation_class[20];
};
main()
{
	int i,n;
	scanf("%d",&n);
	struct traveller s[n];
	printf("name,age,seat number,train number,coach no and class:");
	for(i=0;i<n;i++)
	{
	  scanf("\n%s\n%d\n%d\n%d\n%s\n%s",&s[i].name,&s[i].age,&s[i].seat_no,&s[i].train_no,&s[i].coach_no,&s[i].reservation_class);
	}
    for(i=0;i<n;i++)
	{
	  printf("name is %s\nage is %d\nseat no is %d\ntrain number is %d\ncoach no is %s\nclass is %s\n",s[i].name,s[i].age,s[i].seat_no,s[i].train_no,s[i].coach_no,s[i].reservation_class);	
	  
}
}
