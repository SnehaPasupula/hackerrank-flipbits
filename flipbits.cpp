Flipping Bits
#You will be given a list of 32 bit unsigned integers. Flip all the bits ( and ) and print the result as an unsigned integer.

#include <bits/stdc++.h> 
using namespace std; 
int main() {
 int q; //Testcases
cin>>q; 
for(int l=0;l<q;l++) 
{ 
unsigned int a,b;//take input a
 cin>>a;
 b=~a; //flip bits
cout<<b<<endl;//output the number after flipping the bits

} 
}