#include<stdio.h>
#include<string.h>

typedef struct{
	int day;
	char month[15];
	int year;
}Date;

typedef struct{
	char name[15];
	int age;
	char gender;
	Date birthday;
}Person;

int main(){
	Date birthday = {19, "January", 1995};
	Person p;

	strcpy(p.name,"Bahadir"); // p.name = "Bahadir"; does not work because we can only use for initialization
	p.age = 22;
	p.gender = 'M';
	p.birthday = birthday;

	printf("Name: %s\n", p.name);
	printf("Age: %d\n", p.age);
	printf("Gender: %c\n", p.gender);
	printf("Birthday: %d %s %d\n", p.birthday.day, p.birthday.month, p.birthday.year);

return 0;
}
