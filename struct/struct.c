#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	struct birth{
	  int year;
	  char month;
	  char date;	
	};
	typedef struct birth Birth;
	
	struct student{
	  int id;
	  char phone[11];
	  Birth *birthday;
	};
	typedef struct student Student;

	void print_student(Student *s)
	{
	  printf("%d\n",s->id);
	  puts(s->phone);
	  printf("%d,%d,%d\n,",s->birthday->year,s->birthday->month,
	        s->birthday->date);
	}

	int main(void){
	  int i,n;
	  Student *ptr;
	  Student Paul;
	  ptr=&Paul;

	  Birth My_birthday;
	  ptr->birthday = &My_birthday;
	  ptr->id= 520; //==paul.id
	  strcpy(Paul.phone,"098816888");
	  ptr->birthday->year =1988; //My_birthday year
	  ptr->birthday->month =5;
	  ptr->birthday->date =20;

	  print_student(&Paul);
	  while(1);
	  return 0;
	}
