/*Printing inc pattern
N=4
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;

int main()
{
 int n;
 cin>> n;
 
 int row=1;//initialised row
 int no=1;//initialised the number to be printed
 while(row<=n){
    
    int i=1;//counting the numbers we are printing as num to be printed=row 
    while(i<=row){
        cout << no << " ";
        i=i+1;
        no=no+1;
    }
    row=row+1;
    cout<< endl;  
 }
}
