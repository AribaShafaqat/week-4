#include<iostream>
using namespace std;
void even(int numb);
main()
{
int number;
while(true){
cout<<"enter a number"<<endl;
cin>>number;
even(number);
}
}
void even(int numb)
{
 if(numb%2==0)
 {
  cout<<"You have entered a even number"<<endl;
 }
 if(numb%2!=0)
 {
 cout<<"You have entered a odd number"<<endl;
 }
}

