#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class NewtonForwordInterpolation
{
    
    // Prints root of func(x) with error of EPSILON
    public:
    void newtonForwordInterpolation(double x[], double y[],int n, double xp) {
        double h = x[1] - x[0];
        double u = (xp - x[0])/h;
        double y1[n][n];
        for(int i=0;i<n;i++){
            y1[i][0] = y[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                y1[j][i] = y1[j+1][i-1] - y1[j][i-1];
            }
        }
        double sum = y[0];
        double p = 1;
        for(int i=1;i<n;i++){
            p = p*(u-i+1)/i;
            sum = sum + p*y1[0][i];
        }
        cout<<sum<<endl;
        
    }
       
};

// 2 14.5 3 16.3 4 17.5 5 18

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

    
    NewtonForwordInterpolation solver;
    // func(a) is nagative and func(b) is positive
    solver.newtonForwordInterpolation(x,y,n,xp);
    
         
    
   
    
    
    return 0;
}