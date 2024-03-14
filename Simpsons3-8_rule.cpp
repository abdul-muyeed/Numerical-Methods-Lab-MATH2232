#include<bits/stdc++.h>
using namespace std;

// class for Simpsons3-8 Method

class Simpsons38{
    public:
        double func(double x){
            return 1/(1+x*x);
        }
    public:
        double simpsons38(double a,double b, double n){
            double h = (b-a)/n;
            double s = func(a)+func(b);
            for(int i=1;i<n;i++){
                
                if(i%3==0){
                    s+=2*func(a+i*h);
                }else{
                    s+=3*func(a+i*h);
                }
            }
           
            
            cout<< 3*(h/8)*s << endl;
        }


};



int main()
{
    Simpsons38 solver;
    // lower bound, upper bound, number of intervel
    solver.simpsons38(0,1,6);
    
         
    
   
    
    
    return 0;
}