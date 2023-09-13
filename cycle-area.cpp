// cycle-area-calcapp

#include <iostream>

using namespace std ;

int main ()
{
//  declare double vars
int op ;
double rad , area , circum ;
const double pi = 3.14 ;
cout << "this is an app to calculate circumference and area of the circle \n";
cout << "for calculating the area press 1 . \n";
cout << "for calculating the circumference press 2 . \n";
cin >> op ;

if (op == 1)
{
 cout << "enter your circle area.\n";
 cin>> rad ;
 area = pi * rad * rad ;
 cout << "your circle area is :"<< area <<"\n";    
} else if (op == 2)
{
 cout << "enter your circle circumference.\n";
 cin>> circum ;
 area = pi * 2 * circum ;
 cout << "your circle circumference is :"<< circum <<"\n";   
} else
{
    cout << "invalid value \n";
}

cout << " thank you for your time .\n";

 return 0;
}
