#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double mySqrt(double x) {
    if (x<0){
    return -1;
    }
double estimate=1;
double newestimate=0;
double temp=0;
do {
newestimate=0.5*(estimate+x/estimate);
    temp=estimate;
    newestimate=0.5*(estimate+x/estimate);
    estimate=newestimate;
}

while (abs(temp-newestimate)>0.000001);

return estimate;
}//My Square root Function


int main()
{
   double c;
   cout << "Enter a number whose square root you want to find: "<<endl;
   cin >> c;            //Input a number by the user
   double o=mySqrt(c);
   if (o==-1) {
    cout << "invalid input"<< endl;
   }
   else {
   cout<< o << endl;
   }
} //main()
