#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class LagrangeInterpolation
{
    
    // Prints root of func(x) with error of EPSILON
    public:
    void lagrangeInterpolation(double x[], double y[],int n, double xp) {
        double sum = 0;
        for(int i=0;i<n;i++){
            double p = 1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    p = p*(xp-x[j])/(x[i]-x[j]);
                }
            }
            sum = sum + p*y[i];
        }
        cout<<sum<<endl;
        
    }
       
};

// 0 5 2 7 3 8 5 10 6 12

int main()
{   
    cout<<"Enter number of data points: ";
    int n;cin>>n;
    cout<<"Enter data Formate x y : 1 2 : ";
    double x[n],y[n];
    
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    cout<<"Enter the value of x for which you want to find y : ";
    double xp;cin>>xp;

    
    LagrangeInterpolation solver;
    // func(a) is nagative and func(b) is positive
    solver.lagrangeInterpolation(x,y,n,xp);
    
         
    
   
    
    
    return 0;
}