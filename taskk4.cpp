#include<iostream>
using namespace std;
void eligible(int age);
main()
{
int age; 
while(true){
cout<<"enter age : "<<endl;
cin>>age;
eligible(age);
}

}
void eligible(int age)
{
  if(age>=18)
 {
  cout<<"person is eligible for voting"<<endl;
 }
}

