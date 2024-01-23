#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class LeastSquareE
{
    // equation is x^3 - x^2 + 5
    
    // Prints root of func(x) with error of EPSILON
    public:
    void leastSquareE(double x[], double y[],int n) {
        double sum_x=0,sum_y=0,sum_xy=0,sum_x2=0,a,b;
        for(int i=0;i<n;i++){
            sum_x+=x[i];
            sum_y+=y[i];
            sum_xy+=x[i]*y[i];
            sum_x2+=x[i]*x[i];
        }
        b=((double)n*sum_xy-sum_x*sum_y)/((double)n*sum_x2-sum_x*sum_x);
        a=(sum_y-b*sum_x)/(double)n;

        cout << fixed << setprecision(4) <<  "The values are: " << exp(a)<<" "<< b << endl;
        cout<< fixed << setprecision(4) <<"The best straight line is : y = "<<exp(a)<<" e^ (("<<b<<")x)"<<endl;
    }
       
};

// 1 2.473 3 6.722 5 18.274 7 49.673 9 135.026

int main()
{   
    cout<<"Enter number of data points: ";
    int n;cin>>n;
    cout<<"Enter data Formate x y : 1 2 : ";
    double x[n],y[n];
    
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
        y[i]=log(y[i]);
    }

    
    LeastSquareE solver;
    // func(a) is nagative and func(b) is positive
    solver.leastSquareE(x,y,n);
    
         
    
   
    
    
    return 0;
}