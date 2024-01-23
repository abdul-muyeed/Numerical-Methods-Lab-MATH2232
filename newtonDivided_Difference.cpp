#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class NewtonDividedDifference
{
    
    // Prints root of func(x) with error of EPSILON
    public:
    void newtonDividedDifference(double x[], double y[],int n, double xp) {

        double y1[n][n];
        for(int i=0;i<n;i++){
            y1[i][0] = y[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                y1[j][i] = (y1[j+1][i-1] - y1[j][i-1])/(x[i+j]-x[j]);
                cout<<y1[j][i]<<" ";
            } cout<<endl;
        }
        double sum = y1[0][0];
        // cout<< sum<<endl;
        double p = 1;
        for(int i=1;i<n;i++){
            p = p*(xp-x[i-1]);
            sum = sum + p*y1[0][i];
            // cout<<y1[0][i]<<" "<<p<<endl;
        }
        cout<<sum<<endl;

       
        
    }
       
};

// 5 12 6 13 9 14 11 16

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

    
    NewtonDividedDifference solver;
    // func(a) is nagative and func(b) is positive
    solver.newtonDividedDifference(x,y,n,xp);
    
         
    
   
    
    
    return 0;
}