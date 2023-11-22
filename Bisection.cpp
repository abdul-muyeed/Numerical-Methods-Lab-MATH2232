#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class Bisection
{
    // equation is x^3 - x^2 + 5
    public:
        static double func(double x) {
        return x * x * x - x * x + 5;
    }

    // Prints root of func(x) with error of EPSILON
    public:
    void bisection(double a, double b) {
        
        

        double c = a;
        while ((b - a) >= EPSILON) {
            c = (a + b) / 2;

            if (func(c) == 0.0)
                break;
            else if (func(c) * func(a) < 0)
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
    int lb , ub;
    lb = -10000;
    ub =  10000;
    

    // finding vulue of a such that f(a) is positive
    int a = (rand() % (ub - lb + 1)) + lb;
    while (solver.func(a)<0)
    {
        a = (rand() % (ub - lb + 1)) + lb;
    }

    // finding vulue of b such that f(b) is negative
    int b = (rand() % (ub - lb + 1)) + lb;
    while (solver.func(b)>=0)
    {
        b = (rand() % (ub - lb + 1)) + lb;
    }
    cout << "You have assumed "<< a <<" and "<< b <<endl;
         if(b>a){
            solver.bisection(a, b);
         }else{
            solver.bisection(b, a);
         }
    
   
    
    
    return 0;
}