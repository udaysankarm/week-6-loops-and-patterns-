#include<iostream>
using namespace std;
int main()
{
   
  int i,j,n,p; //declatration of variable to control loop
  cout<<"enter the size of pattern"; 
  cin>>n;
  for(i=0;i<n;i++) //main for loop
     {
        cout<<"\n"; //jumping to next line
        for(p=0;p<i;p++)//condition to print the space beforr the pattern
        cout<<" ";   //printing the blank space before the actual pattern
        if((i>0)&&(i<n-1))  //condition to enter star at ends
	{
          cout<<"*"; //printing the initial star
          for(j=0;j<n-2;j++) //condition to  print the space in between 
          {
          cout<<" ";      //printing the soace inbetween
          }
          cout<<"*";//printing the last star
        }
     
	else
	   {
	    for(j=0;j<n;j++) //loop for printing each star at the first line and last line
	     {
              cout<<"*"; //printing each star at the end and begining
             }
	  }
     }
  cout<<endl; 
 return 0;
}
