#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class Bisection
{
    // equation is x^3 - x^2 + 5
    public:
        double func(double x) {
        return 1*x*x*x + 3*x * x - 1*x - 9;
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
        double c=a;
        while ((b - a) >= EPSILON) {
            // cout << "a = " << a << " b = " << b << endl;
            c = (a + b) / 2;

            if (func(c) == 0.0)
                break;
            else if (func(c)*func(a)< 0)
                b = c;
            else
                a = c;
        }
        cout << "The value of root is: " << c << endl;
    }
       
};



int main()
{
    Bisection solver;
    
    int a = 0;
    int b = 0;
    while(a==b){
         a = solver.random();
         b = solver.random();
        
        // finding vulue of a such that f(a) is positive
        while (solver.func(a)<0)
        {
            a = solver.random();
        }

        // finding vulue of b such that f(b) is negative
        while (solver.func(b)>0)
        {
            b = solver.random();
        }
    }
    
    cout << "You have assumed "<< a <<" and "<< b <<endl;
        
           
            solver.bisection(b, a);
         
    
   
    
    
    return 0;
}