#include "iostream"
using namespace std;

typedef struct Student
{
	long number;
	char name[15];
	int score;
}Student;
Student student[200];

int studentnumber=0;
int ListClass();
int DropClass();
int ElectClass();
int InputMark();
int check(char * num);
int InputData(Student &a);
int Delete(Student *s,int i);

int main(){
	int choice;
	while (1)
	{
		cout<<"\t\t\t\tWelcome to course selection system~"<<endl;
		cout<<"\t\t\t\tPlease choose want you want to do~\n\n"<<endl;
		cout<<"\t1)\tList the student information"<<endl;
		cout<<"\t2)\tSelect class"<<endl;
		cout<<"\t3)\tDrop the class"<<endl;
		cout<<"\t4)\tInput scores"<<endl;
		cout<<"\t5)\tExit"<<endl;

		cin>>choice;

		switch (choice)
		{
		case 1:{
			ListClass();
				break;
			   }
		case 2:{
			DropClass();
				break;
			   }
		case 3:{
			ElectClass();
			break;
			   }
		case 4:{
			InputMark();
			break;
			   }
		case 5:{
			cout<<"\t\t\t\tBye~~"<<endl;
			break;
			   }

		default:
			cout<<"\t\t\t\tError parameter!!"<<endl;
			break;
		}
	}
	
	return 0;
}

int ListClass(){
	cout<<"\t\tNumber\t\tName\t\tScore"<<endl;
	for (int i = 0; i < studentnumber; i++)
	{
			cout<<student[i].number<<"\t\t"<<student[i].name<<"\t\t"<<student[i].score<<endl;		
	}
	return 0;
}

int ElectClass(){
	Student someone;
	InputData(someone);
	int i=check(someone.name);
	if (i==studentnumber)
	{
		strcpy(student[i].name,someone.name);
		student[i].number=someone.number;
		student[i].score=someone.score;
		studentnumber++;
	}
	else
	{
		cout<<"Student exists!"<<endl;
		ElectClass();
	}
	return 0;
}

int check(char * num){
	int i;
	for (i = 0; i < studentnumber; i++)
	{
		if (strcmp(student[i].name,num)==0)
		{
			break;
		}
	}
	return i;
}

int InputData(Student &a){
	cout<<"Input number:"<<endl;
	cin>>a.number;
	cout<<"Input name:"<<endl;
	cin>>a.name;
	cout<<"Input score:"<<endl;
	cin>>a.score;
	return 0;
}

int DropClass(){
	Student someone;
	InputData(someone);
	int i=check(someone.name);
	if (i==studentnumber)
	{
		cout<<"No this student..."<<endl;
	}
	else
	{
		Delete(student,i);
	}
	return 0;
}

int Delete(Student *s,int i){
	int k;
	if (i<studentnumber)
	{
		for (k=i;k<studentnumber; k++)
		{
			student[k-1]=student[k];
		}
		studentnumber--;
	}
	return 0;
}