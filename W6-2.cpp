#include<iostream>
using namespace std;
int main()
{
   
  int i,j,n; //declatration of variable to control loop
  cout<<"enter the size of pattern"; 
  cin>>n;
  for(i=0;i<n;i++) //main for loop
     {
        cout<<"\n"; //jumping to next line
        if((i>0)&&(i<n-1))  //condition to differtiate  the middle rows
	{
          cout<<"*";      //printing the initial star
          for(j=0;j<n-2;j++)   //output for 2nd 3rd and 4th row
          {
          cout<<" ";   //printing the space in between
          }
          cout<<"*"; //printing the final star
        }
     
	else
	   {
	    for(j=0;j<n;j++) //loop for printing each star at the first line and last line
	     {
              cout<<"*"; //printing each star
             }
	  }
     }
  cout<<endl; 
 return 0;
}
