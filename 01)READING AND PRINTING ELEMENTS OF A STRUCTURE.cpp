//READING AND PRINTING ELEMENTS OF A STRUCTURE
#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float cgpa;
};
main()
{
	struct student s;
	s.rno=12;
	strcpy(s.name,"DEEKHSITH");
	s.cgpa=10.0;
	printf("student details are \n");
	printf("rno is %d\nname is %s\ncgpa is %f",s.rno,s.name,s.cgpa);
}
