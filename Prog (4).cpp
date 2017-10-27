#include<iostream>
#include<string>
using namespace std;
int main()
{
char name[]="Soumyadeep\n",*c;
cout<<"Printing String Character By Character By Normal Index Method : \n";
for(int i=0;i<10;i++)
{cout<<name[i];}
c=name;
cout<<"\nPrinting String Character By Character By Pointer Method : \n";
for(int i=0;i<10;i++)
{cout<<*(c+i);}
return 0;
}
