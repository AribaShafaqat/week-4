#include<iostream>
using namespace std;
void ifpass(int marks);
main()
{
int marks;
while(true){
cout<<"enter your quiz marks"<<endl;
cin>>marks;

ifpass(marks);
}
}
void ifpass(int marks)
{

 if(marks>50)
{
  cout<<"You have passed first quiz of PF"<<endl;
}
 if(marks==50)
{ 
 cout<<"you barely passed the PF. Work Hard"<<endl;
}
 if(marks<50)
{
  cout<<"you have failed"<<endl;
}

}






