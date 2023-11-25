#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class Bisection
{
    // equation is x^3 - x^2 + 5
    public:
        double func(double x) {
            int a = 1, b = -2, c = -6, d = 0;
            return a*x*x*x + b*x*x + c*x + d;
        }
    public:
        int random(){
            int lb = -10000;
            int ub =  10000;
            int a = (rand() % (ub - lb + 1)) + lb;
            return a;
        }
    // Prints root of func(x) with error of EPSILON
    public:
    void bisection(double a, double b) {
        double x=a;
        while ((b - a) >= EPSILON) {
            // cout << "a = " << a << " b = " << b<< " f(a) = "<<func(a) << " f(b)= "<<func(b) << endl;
            x = (a + b) / 2;
			// cout<<"x = "<<c<<" f(x)="<<func(x)<<endl;
            if (func(x) == 0.0)
                break;
            else if (func(x)*func(a)< 0)
                b = x;
            else
                a = x;
        }
        cout << "The value of root is: " << x << endl;
    }
       
};



int main()
{
    Bisection solver;
        // func(a) is nagative and func(b) is positive
         int a = solver.random() ,b = solver.random();
        
        
        while (solver.func(a)>0)
        {
            a = solver.random();
        }

        // finding vulue of b such that f(b) is negative
        while (solver.func(b)<0)
        {
            b = solver.random();
        }
    
    
    cout << "You have assumed "<< a <<" and "<< b <<endl;
    // cout<< "f(a) = "<< solver.func(a) << " f(b) = "<< solver.func(b) <<endl;
   
           
            solver.bisection(a, b);
         
    
   
    
    
    return 0;
}