#include<iostream>
using namespace std;
int fact(int number)
{
  if(number == 0)
  {
     return 1 ; 
  }
  return number*fact(number-1);
}
int main()
{
  int i,fac=1,num;
  cout<<"Enter number of which u want to calculate factorial\n";
  cin>>num;
  
    
   cout<<"factorial of " <<num<< " is :" <<fact(num)<<endl;

  return 0;
}
