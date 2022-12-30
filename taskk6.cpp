#include<iostream>
using namespace std;
void greaterNumber(int firstNumb,int secondNumb);
main()
{
int a,b;
while(true){
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
greaterNumber(a,b);
}
}
void greaterNumber(int firstNumb,int secondNumb)
{
 if(firstNumb>secondNumb)
 {
  cout<<"first Number is greater number"<<endl;
 }
 if(firstNumb<secondNumb)
 {
 cout<<"second number is greater number"<<endl;
 }
}