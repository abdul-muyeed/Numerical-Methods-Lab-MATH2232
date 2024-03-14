#include<bits/stdc++.h>
using namespace std;

// class for EulersMethod

class Eulers{
    public:
        double func(double x, double y){
            return x+y;
        }
    public:
        double eulers(double x, double y, double xn, double n){
            double h=xn/n;
            double y1=0;
            for(int i=0;i<n;i++){
                y1 = y + h*func((x+i*h),y);
                y=y1;
            }
            cout<< y <<endl;
           
        }


};



int main()
{
    Eulers solver;
    double x,y,xn,step;
    // cin>>x>>y>>xn>>step;
    // solver.eulers(x,y,xn,step);
    solver.eulers(0,1,0.1,5);
    
         
    
   
    
    
    return 0;
}