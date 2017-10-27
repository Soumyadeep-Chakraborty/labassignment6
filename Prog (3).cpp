#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    //normal index method
    for(int i=0;i<=9;i++)
        cout<<a[i];
    //pointer-method
    for(int i=0;i<=9;i++)
        cout << *(a+i);
        
  
    return 0;
}
