#include<iostream>
using namespace std;
void add(int num1,int num2);
void multiplication(int num1,int num2);
void subtraction(int num1,int num2);
main()
{
int num1,num2;
char operation;
cout<<"enter number 1"<<endl;
cin>>num1;
cout<<"enter number 2"<<endl;
cin>>num2;
cout<<"enter operator"<<endl;
cin>>operation;
if(operation=='+')
 {
   add(num1,num2);
 }
if(operation=='*')
 {
  multiplication(num1,num2);
 }
if(operation=='-')
 {
  subtraction(num1,num2);
 }

}
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"sum is : "<<sum<<endl;
}
void multiplication(int num1,int num2)
{
int product=(num1*num2);
cout<<"product is : "<<product<<endl;
}
void subtraction(int num1,int num2)
{
int sub=num1-num2;
cout<<"subtraction is : "<<sub<<endl;
}