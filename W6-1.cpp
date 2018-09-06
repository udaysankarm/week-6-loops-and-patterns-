#include<iostream> //library
using namespace std;//standard library
int main()//main function
{
 
  int i,j,n;  //declaration
  cout<<"Enter the size of pattern"; //asking the user for the size
  cin>>n;                            // taking a value for n
  for(i=0;i<n;i++)//1st for loop for changing line 
     {
        cout<<"\n";   //jumping to next line
      	for(j=0;j<n;j++) //loop for priting each star
	 {
             cout<<"*"; //output
	 }


     }
 cout<<"\n";
 return 0; 
}
