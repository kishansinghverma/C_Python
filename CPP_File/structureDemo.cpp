#include <stdio.h>

typedef struct student
{
	int roll_no, marks;
}student;

int main()
{
	student *ptr=&student;
	student s1,s2;
	scanf("%d", &s1.roll_no);
	scanf("%d", &s1.marks);
	printf("%d \n", s1.roll_no);
	printf("%d \n", s1.marks);
	scanf("%d", &s2.roll_no);
	scanf("%d", &s2.marks);
	printf("%d \n", s2.roll_no);
	printf("%d", s2.marks);
	return 0;
}
