#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

// class for Bisection Method
class Lagrange
{
    public:
        int arr[4]={1,-1,0,5};
        // equation is x^3 - x^2 + 5
    
    public:
        double func(double x) {
            
            return arr[0]*x*x*x + arr[1]*x*x + arr[2]*x + arr[3];
        }
    public: 
        double funcdd(double x){
            return 3*arr[0]*x*x + 2*arr[1]*x+ arr[2];
        }
    public:
        int random(){
            int lb = -100;
            int ub =  100;
            int a = (rand() % (ub - lb + 1)) + lb;
            return a;
        }
    // Prints root of func(x) with error of EPSILON
    public:
    void lagrange(double ar[][1], double x, int n) {
        int y = 0;
        for(int i =0;i<n;i++){
            double val = 1;
            for (int j = 0; j < n; j++)
            {
               if(i==j) continue;
               val *= ((x-ar[j][0])/(ar[i][0]-ar[j][0]));
            }
            val *= ar[i][1];
            y +=val;
        }
        cout<<"Calculated points "<<x<<" "<< y<< endl;
        
    }
       
};



int main()
{
    srand(time(0));
    Lagrange solver;
    cout<< "Enter number of element: ";
    int n;cin>>n;
    double x[n][1];
    for(int i=0;i<n;i++){
        cin>>x[i][0]>>x[i][1];
    }
    cout<< "Enter point";
    double point;cin>>point; 
    solver.lagrange(x,point,n);

         
         
    
   
    
    
    return 0;
}