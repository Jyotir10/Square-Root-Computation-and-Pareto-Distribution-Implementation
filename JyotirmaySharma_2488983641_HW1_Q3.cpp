#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

void printStars(int n) {
  for(int i=0;i < n;i++) {
    cout << "*";
  }
  cout << endl;
}/// printStars()

int main()
{
    int n=300;
    int seed=1527511825;
    srand(seed);
    int alpha=25;
    double den=0;
    double largestVal= -100000000, smallestVal= 10000000;
    int b0=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
    double pNorm=0;

    //Loop for finding the smallest and largest values of a given set of Random Numbers
    for (int c1=0;c1<n;c1++){
        double r=(double)rand()/RAND_MAX;
        den=pow(r,1.0/alpha);

        double pr=1/den;

        if(pr > largestVal){
            largestVal = pr;
        }
        if(pr < smallestVal){
            smallestVal = pr;
        }


    }

    srand(seed);

    //Loop for binning the random values generated by Pareto Function using the smallest and the largest value generated
     for (int c2=0;c2<n;c2++){
        double r1=(double)rand()/RAND_MAX;
        den=pow(r1,1.0/alpha); //denominator
        double pr1=1/den;
        pNorm=(pr1-smallestVal)/(largestVal-smallestVal); //normalization using the smallest and largest values
        int b=floor(pNorm*10); //value for binning
        switch(b) {
        case 0:
        b0++;
        break;

        case 1:
        b1++;
        break;

        case 2:
        b2++;
        break;

        case 3:
        b3++;
        break;

        case 4:
        b4++;
        break;

        case 5:
        b5++;
        break;

        case 6:
        b6++;
        break;

        case 7:
        b7++;
        break;

        case 8:
        b8++;
        break;

        case 9:
        b9++;
        break;

        default:
        b9++;

        }


     }


     int ab0 = floor(100 * b0/n);
     int ab1 = floor(100 * b1/n);
     int ab2 = floor(100 * b2/n);
     int ab3 = floor(100 * b3/n);
     int ab4 = floor(110 * b4/n);
     int ab5 = floor(150 * b5/n);
     int ab6 = floor(150 * b6/n);
     int ab7 = floor(220 * b7/n);
     int ab8 = floor(350 * b8/n);
     int ab9 = floor(70 * b9/n);

     cout<< "Pareto Distribution" <<endl;

     printStars(ab0);
     printStars(ab1);
     printStars(ab2);
     printStars(ab3);
     printStars(ab4);
     printStars(ab5);
     printStars(ab6);
     printStars(ab7);
     printStars(ab8);
     printStars(ab9);

}
