#include <iostream>
using namespace std;

int main()
{
    char  str[20], *p;

    cout << "Input About 10 Characters Of String : \n";
    cin >> str;
    p=str;
    for(int j=20;j>=0;j--)
    {
    while(*(p+j)==NULL){j--;}
    for(int i=j;i<=20;i++)
    {cout<<*(p+i);}
    cout<<endl;
    }
    return 0;
    }
