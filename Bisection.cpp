#include<bits/stdc++.h>
using namespace std;

class Bisection
{
    public:
        static double func(double x) {
        return x * x * x - x * x + 5;
    }
    public:
    void bisection(double a, double b) {
        
        

        double c = a;
        while ((b - a) >= 0.01) {
            c = (a + b) / 2;

            if (func(c) == 0.0)
                break;
            else if (func(c) * func(a) < 0)
                b = c;
            else
                a = c;
        }
        cout << "The value of root is: " << c << endl;
        return;
    }
       
};



int main()
{
    Bisection solver;
    int lb , ub;
    lb = -10000;
    ub =  10000;
    int a = (rand() % (ub - lb + 1)) + lb;
    while (solver.func(a)<0)
    {
        a = (rand() % (ub - lb + 1)) + lb;
    }
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