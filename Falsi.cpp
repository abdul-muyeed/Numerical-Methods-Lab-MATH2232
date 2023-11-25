#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class Falsi
{
    // equation is x^3 - x^2 + 5
    public:
        double func(double x) {
            int a = 1, b = -2, c = -6, d = 0;
            return a*x*x*x + b*x*x + c*x + d;
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
    void falsi(double a, double b) {
        double x=a,prev_x=INT_MAX;
        while ((b - a) >= EPSILON) {
            x = (a*func(b) - b*func(a)) / (func(b) - func(a));
            //  cout << "a = " << a << " b = " << b<< " f(a) = "<<func(a) << " f(b)= "<<func(b) <<" ";
			//  cout<<"x = "<<x<<" f(x)="<<func(x)<<endl;

            if (func(x) == 0.0)
                break;
            else if (func(x)*func(a)< 0)
                b = x;
            else
                a = x;

            if(prev_x == x)
                break;

            prev_x = x;
        }
        cout << "The value of root is: " << x << endl;
    }
       
};



int main()
{
    Falsi solver;
    // func(a) is nagative and func(b) is positive
    int a = solver.random() ,b = solver.random();
        
        while (solver.func(a)>0)
        {
            a = solver.random();
        }

        // // finding vulue of b such that f(b) is negative
        while (solver.func(b)<0)
        {
            b = solver.random();
        }
    
    cout << "You have assumed "<< a <<" and "<< b  <<endl;
    // cout<< "f(a) = "<< solver.func(a) << " f(b) = "<< solver.func(b) <<endl;
        
           
            solver.falsi(a, b);
         
    
   
    
    
    return 0;
}