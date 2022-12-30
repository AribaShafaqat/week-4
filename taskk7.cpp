#include<iostream>
using namespace std;
void totalAmount(string day,int amount);
main()
{
string day;
int amountt;
while(true){
cout<<"enter day"<<endl;
cin>>day;
cout<<"enter amount"<<endl;
cin>>amountt;
totalAmount(day,amountt);
}

}
void totalAmount(string day,int amount)
{
 int purchaseAmount;

 if(day=="Sunday")
 { 
 purchaseAmount=amount-(amount*10/100);
 cout<<"total purchase amount is : "<<purchaseAmount<<endl;
 }
if(day!="Sunday")
 {
  cout<<amount<<endl;
 }
}

