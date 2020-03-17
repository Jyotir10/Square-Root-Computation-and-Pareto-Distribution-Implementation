#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void printStars(int n) {
  for(int i=0;i < n;i++) {
    cout << "*";
  }
  cout << endl;
} // printStars()


using namespace std;

int main()
{


     srand(time(NULL));
     int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
     cout<<"Input n for Uniform Distribution:" <<endl;

     int n;
     cin>> n;
     for (int i=0; i<n ; i++) {
     double r = ((double)rand())/RAND_MAX;
     int c = floor(r*10);


        if(c==0){
        a0++;
       }
       else if(c==1){
        a1++;
       }
       else if(c==2){
        a2++;
       }
       else if(c==3){
        a3++;
       }
       else if(c==4){
        a4++;
       }
       else if(c==5){
        a5++;
       }
       else if(c==6){
        a6++;
       }
       else if(c==7){
        a7++;
       }
       else if(c==8){
        a8+=1;
       }
       else {
        a9++;
       }




     }
   int  na0=floor(100 *a0/n);
    int na1=floor(100 *a1/n);
     int na2=floor(100 *a2/n);
     int na3=floor(100 *a3/n);
     int na4=floor(100 *a4/n);
     int na5=floor(100 *a5/n);
     int na6=floor(100 *a6/n);
     int na7=floor(100 *a7/n);
     int na8=floor(100 *a8/n);
     int na9=floor(100 *a9/n);

     cout<< "UNIFORM DISTRIBUTION" << endl;

         printStars(na0);
         printStars(na1);
         printStars(na2);
         printStars(na3);
         printStars(na4);
         printStars(na5);
         printStars(na6);
         printStars(na7);
         printStars(na8);
         printStars(na9);

         cout<<"The value of bins a0,a1,a2,a3,a4,a5,a6,a7,a8,a9 are:"<<endl;
         cout<<a0 << " " <<a1<< " " << a2 <<" " << a3 << " " << a4 <<" "<< a5 <<" "<< a6<< " "<<a7<<" "<<a8<< " " <<a9<<endl;
         cout<< "The value of the sum of all the bins is: " << a0+a1+a2+a3+a4+a5+a6+a7+a8+a9 << endl;
         cout<< "The value of n is:" << n <<endl;

         //'Triangular' Distribution

         cout <<"Enter the value of n2 for 'Triangular' Distribution"<<endl;


         int n2;
         cin >> n2;
         int b0=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;

         for (int i=0; i<n2 ; i++) {
     double r1 = ((double)rand())/RAND_MAX;
     double r2 = ((double)rand())/RAND_MAX;
     double rav=0.5*(r1+r2);

     int c2 = floor(rav*10);


        if(c2==0){
        b0++;
       }
       else if(c2==1){
        b1++;
       }
       else if(c2==2){
        b2++;
       }
       else if(c2==3){
        b3++;
       }
       else if(c2==4){
        b4++;
       }
       else if(c2==5){
        b5++;
       }
       else if(c2==6){
        b6++;
       }
       else if(c2==7){
        b7++;
       }
       else if(c2==8){
        b8+=1;
       }
       else {
        b9++;
       }




     }
     int nb0=floor(100*b0/n2);
     int nb1=floor(100*b1/n2);
     int nb2=floor(100*b2/n2);
     int nb3=floor(100*b3/n2);
     int nb4=floor(100*b4/n2);
     int nb5=floor(100*b5/n2);
     int nb6=floor(100*b6/n2);
     int nb7=floor(100*b7/n2);
     int nb8=floor(100*b8/n2);
     int nb9=floor(100*b9/n2);

     cout<< "'Triangular' Distribution"<<endl;

         printStars(nb0);
         printStars(nb1);
         printStars(nb2);
         printStars(nb3);
         printStars(nb4);
         printStars(nb5);
         printStars(nb6);
         printStars(nb7);
         printStars(nb8);
         printStars(nb9);

         cout<<"The value of bins b0,b1,b2,b3,b4,b5,b6,b7,b8,b9 are:"<<endl;
         cout<<b0 << " " <<b1<< " " << b2 <<" " << b3 << " " << b4 <<" "<< b5 <<" "<< b6<< " "<<b7<<" "<<b8<< " " <<b9<<endl;
         cout<< "The value of the sum of all the bins is: " << b0+b1+b2+b3+b4+b5+b6+b7+b8+b9 << endl;
         cout<< "The value of n2 is:" << n2 <<endl;


}


