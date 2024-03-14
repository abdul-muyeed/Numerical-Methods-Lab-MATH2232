#include<bits/stdc++.h>
using namespace std;

// class for Trapezoidal Method

class Trapezoidal{
    public:
        double func(double x){
            return 1/(1+x*x);
        }
    public:
        double trapezoidal(double a,double b, double n){
            double h = (b-a)/n;
            double s = func(a)+func(b);
            for(int i=1;i<n;i++){
                s+= 2*func(a+i*h);
            }

            cout<< (h/2)*s << endl;
        }


};



int main()
{
    Trapezoidal solver;
    // lower bound, upper bound, number of intervel
    solver.trapezoidal(0,1,6);
    
         
    
   
    
    
    return 0;
}