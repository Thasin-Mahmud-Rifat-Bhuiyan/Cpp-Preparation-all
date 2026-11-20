#include<iostream>
using namespace std;
int main()
{
    int a=14; //  divider
    int b=3; // divisor
  int q=a/b; // quotient
 int r=a%b; // reminder
    //a=b*q+r
     r=a-b*q;

    cout<<"reminder is "<< r<<endl;
    return 0;
}
