//READING AND PRINTING ELEMENTS OF A STRUCTURE
#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float cgpa;
};
main()
{
	struct student s={12,"deekshith",10.0};
	printf("student details are \n");
	printf("rno is %d\nname is %s\ncgpa is %f",s.rno,s.name,s.cgpa);
}
