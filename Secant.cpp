#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.000001

// class for Bisection Method
class Secant
{
    public:
        int arr[4]={1,0,-5,1};

        // equation is x^3 - x^2 + 5
        // int range = sqrt(abs((arr[1]/arr[0])*(arr[1]/arr[0])-2*(arr[2]/arr[0]))) + 1;
    
    public:
        double func(double x) {
            
            return arr[0]*x*x*x + arr[1]*x*x + arr[2]*x + arr[3];
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
    void bisection(double a, double b) {
        double x=a;
        int i=0;
        while (abs(b - a) >= EPSILON) {
             x = (a*func(b)-b*func(a))/(func(b)-func(a));
             cout<<'#'<<++i<<endl;
            cout<<x<<endl;
            cout<<a<<endl;
            cout<<func(a)<<endl;
            cout<<b<<endl;
            cout<<func(b)<<endl;
            a=b;
            b=x;
        }
        cout << "The value of root is: " << x << endl;
    }
       
};



int main()
{
    srand(time(0));
    Secant solver;
        // func(a) is nagative and func(b) is positive
         int a = solver.random(), b = solver.random();
         int t1=1000,t2=1000;
        //  cout<< a << " "<< b <<endl;
        

         // finding vulue of a such that f(a) is negative
        while (solver.func(a)>=0 && --t1)
        {
            a = solver.random();
        }

        // finding vulue of b such that f(b) is positive
        while (solver.func(b)<=0 && --t2)
        {
            b = solver.random();
        }
        if(solver.func(a)*solver.func(b) >=0){
            cout<< "Bisection Method cant find the root of the equation. try chatgpt method"<<endl;
            return 0;
        }
    
    cout << "You have assumed "<< a <<" and "<< b <<endl;
    // cout<< "f(a) = "<< solver.func(a) << " f(b) = "<< solver.func(b) <<endl;
   
           
            solver.bisection(a, b);
         
    
   
    
    
    return 0;
}