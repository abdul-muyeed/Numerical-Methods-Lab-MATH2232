#include<bits/stdc++.h>
using namespace std;

// class for Simpsons1-3 Method

class Simpsons13{
    public:
        double func(double x){
            return 1/(1+x*x);
        }
    public:
        double simpsons13(double a,double b, double n){
            double h = (b-a)/n;
            double s = func(a)+func(b);
            for(int i=1;i<n;i+=2){
                s+=4*func(a+i*h);
            }
            for(int i=2;i<n;i+=2){
                s+=2*func(a+i*h);
            }
            
            cout<< (h/3)*s << endl;
        }


};



int main()
{
    Simpsons13 solver;
    // lower bound, upper bound, number of intervel
    solver.simpsons13(0,1,6);
    
         
    
   
    
    
    return 0;
}