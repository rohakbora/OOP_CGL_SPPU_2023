#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct stud
{
	int rno;
	char nm[10];
}s;

void create()
{
	ofstream fout;
	int n,i;
	fout.open("stud14.txt",ios::out);
	cout<<"\nEnter the number of record=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter roll no and name";
		cin>>s.rno;
		cin>>s.nm;
		fout<<endl<<s.rno<<" "<<s.nm;
	}
	fout.close();
}

void display()
{
	ifstream fin;
	fin.open("stud14.txt",ios::in);
	while(!fin.eof())
	{
		fin>>s.rno>>s.nm;
		cout<<"\n"<<s.rno<<" "<<s.nm;
	}
	fin.close();
}

void search()
{
	ifstream fin;
	int fl,key;
	cout<<"\nEnter Roll number of element which you want to search= ";
	cin>>key;
	fin.open("stud14.txt",ios::in);
	while(!fin.eof())
	{
		fin>>s.rno>>s.nm;
		if(s.rno==key)
		{
			fl=1;
			break;
		}
	}
	if(fl==1)
	cout<<"\nElement found\n"<<s.rno<<" "<<s.nm;
	else
	cout<<"\nElement not found\n";
	fin.close();
}

int main()
{
	int ch;
	do
	{
		cout<<"\n1.create\n2.display\n3.search\n4.exit";
		cout<<"\nEnter your choice= ";
		cin>>ch;
		switch(ch)
		{
			case 1:create();
			break;
			case 2:display();
			break;
			case 3:search();
			break;
		}
	}while(ch<4);
	return 0;
}