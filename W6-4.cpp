#include<iostream>
using namespace std;
int main()
{
 
  int i,j,n;
  cout<<"Enter the size the pattern";
  cin>>n;
  for(i=0;i<n;i++) //main loop
     {
        cout<<"\n"; //jumping to next line
      
	for(j=0;j<(n-i);j++)//loop for printing each row
	 {
           cout<<" ";  //printing the blank space before the pattern


	 }
         for(j=0;j<n;j++)//loop for printing each row
	 {
           cout<<"*"; //printing the stars


	 }


     }

 return 0;
}
