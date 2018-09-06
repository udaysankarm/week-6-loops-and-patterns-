#include<iostream>
using namespace std;
int main()
{
 
  int i,j,n;
  cout<<"Enter the size of the pattern"; //output to instruct the user to givr the size of the pattern
  cin>>n; //recieving the size of the pattern
  for(i=0;i<n;i++) //main loop
     {
        cout<<"\n"; //jumping to next line
      
	for(j=0;j<i;j++)//loop for printing blank at each row
	 {
           cout<<" "; //printing the blank space


	 }
         for(j=0;j<n;j++)//loop for printing each row n times
	 {
           cout<<"*";


	 }


     }

 return 0;
}
