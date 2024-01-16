#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

// class for Bisection Method
class NewtonRaphon
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
    void newtonRaphon(double a) {
        double x=func(a)/funcdd(a);
        while (abs(x) > EPSILON) {
             a = a-x;
            if (func(x) == 0.0)
                break;
            else
                x =  func(a)/funcdd(a);
        }
        cout << "The value of root is: " << a << endl;
    }
       
};



int main()
{
    srand(time(0));
    NewtonRaphon solver;
         int a = solver.random();
         int t1=1000;
        
            // generating random value of a such that f(a) is zero
        while (solver.func(a)!=0 && --t1)
        {
            a = solver.random();
        }

        
        
    
    
    cout << "You have assumed "<< a <<endl;
    // cout<< "f(a) = "<< solver.func(a) << " f(b) = "<< solver.func(b) <<endl;
   
           
            solver.newtonRaphon(a);
         
    
   
    
    
    return 0;
}