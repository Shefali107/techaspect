#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	string name;
	int age;
	string branch;
	int year;
	int sem;
	
	public:
		float score;
		Student()
		{
			name="";
			age=0;
			branch="";
			year=0;
			sem=0;
			score=0.0;
		}
		void get_data()//inserting data and writting it to the file
		{
			ofstream out;
			out.open("Students.txt",ios::app);

			cout<<"\nEnter the name of student:";
			cin>>name;
			out<<name<<endl;
			cout<<"\nEnter the age of student:";
			cin>>age;
			out<<age<<endl;
			cout<<"\nEnter the branch of student:";
			cin>>branch;
			out<<branch<<endl;
			cout<<"\nEnter the year of student:";
			cin>>year;
			out<<year<<endl;
			cout<<"\nEnter the semester of student:";
			cin>>sem;
			out<<sem<<endl;
			cout<<"\nEnter the previous semester score(%) of student:";
			cin>>score;
			out<<score<<endl;
			out.close();
		}
		
		void put_data()//displaying student details
		{
			
			cout<<"\nName:"<<name;
			
			cout<<"\nAge:"<<age;
			
			cout<<"\nBranch:"<<branch;
		
			cout<<"\nYear:"<<year;
			
			cout<<"\nSemester:"<<sem;
			
			cout<<"\nScore:"<<score;
			
		}
		
		
};
int main()
{
	int n,j=0,k=0;
	float p;
	cout<<"\nEnter number of students:";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++)
	{
		s[i].get_data();
		
		cout<<"\n\n";
	}
	
	
	cout<<"\n\n-----Students Details-----\n\n";
	for(int i=0;i<n;i++)
	{
		s[i].put_data();
		cout<<"\n\n";
	}
	cout<<"\n\n-----Filtering based on Percentage---\n";
	cout<<"\nEnter the percentage to be retrieved:";
	cin>>p;
	for(j=0;j<n;j++)
	{
		if(s[j].score==p)
		{
		s[j].put_data();//filtering based on percentage
		k=1;
	}
	}
	if(k==0)
	
		cout<<"\n....Not Found....";
}
