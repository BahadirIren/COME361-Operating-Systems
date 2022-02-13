#include<stdio.h>
#include<string.h>

typedef struct{
	int day;
	char month[15];
	int year;
	}Date;

Date birthday = {10, "September", 1990};


struct Date2{
	int day;
	char month[15];
	int year;
	}birthday2={10, "September", 1990};


int main(){
	Date birthday3;
	birthday3.day = 10;
	strcpy(birthday3.month, "September");
	birthday3.year = 1990;

	printf("The birthday is: %d %s %d\n", birthday3.day, birthday3.month, birthday3.year);

return 0;
}
