#include <iostream>
#include <cmath>

using namespace std;

double  Euclidean_distance(double x1,double x2,double y1,double y2) {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  }
int main()
{
    cout<<"calculate the euclidean between two points"<<endl;

    double x1, x2, y1, y2;
   cout <<" \nEnter the value of x1: ";
   cin >> x1 ;
   cout << " Enter the value of x2: ";
   cin >> x2 ;

  cout <<" Enter the value of y1: ";
   cin >> y1 ;
   cout << " Enter the value of y2: ";
   cin >> y2 ;

   double d = Euclidean_distance(x1, x2, y1, y2);

  cout << " The distance between point 1 and point 2 is "<< d <<endl;

    return 0;
}
