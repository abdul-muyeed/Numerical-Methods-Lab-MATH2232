#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

class LeastSquare
{
    public:
    void leastSquare(double x[], double y[],int n) {
        double sum_x=0,sum_y=0,sum_xy=0,sum_x2=0,a,b;
        for(int i=0;i<n;i++){
            sum_x+=x[i];
            sum_y+=y[i];
            sum_xy+=x[i]*y[i];
            sum_x2+=x[i]*x[i];
        }
        b=(n*sum_xy-sum_x*sum_y)/(n*sum_x2-sum_x*sum_x);
        a=(sum_y-b*sum_x)/n;

        cout << "The values are: " << a <<" "<< b << endl;
        cout<< "The best straight line is : y = "<<a<<" + ("<<b<<")x"<<endl;
    }
       
};

// 0 -1 2 5 5 12 7 20

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

    
    LeastSquare solver;
    // func(a) is nagative and func(b) is positive
    solver.leastSquare(x,y,n);
    
         
    
   
    
    
    return 0;
}