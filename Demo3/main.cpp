#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double hInches,dFeet,dInches,angleDegrees;

   cout << "Enter hInches in inches:";
   cin >> hInches;

   cout <<"Enter dFeet in feet:";
   cin >> dFeet;

   cout << "Enter dInches in dInches:",
   cin >> dInches;

   cout <<"Enter angleDegrees:";
   cin >> angleDegrees;

   double dFeetTotal = (dFeet*12) + dInches;

   double hTree = (hInches + dFeetTotal*tan(angleDegrees*3.14159/180))/12;
   // hTree stands for height of a tree
    cout <<"The height of the tree is:"<< hTree <<" feet";

    return 0;
}
