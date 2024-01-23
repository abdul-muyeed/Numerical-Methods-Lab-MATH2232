#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// class for Bisection Method
class Bisection
{
    public:
        int arr[4]={0,-2,1,7};
        // equation is x^3 - x^2 + 5
        // int range = sqrt(abs((arr[1]/arr[0])*(arr[1]/arr[0])-2*(arr[2]/arr[0]))) + 1;
    
    public:
        double func(double x) {
            
            return arr[0]*x*x*x + arr[1]*x*x + arr[2]*x+arr[3];
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
        while (abs(b - a) >= EPSILON) {
             x = (a + b) / 2;
            // cout << "a = " << a << " b = " << b<< " f(a) = "<<func(a) << " f(b)= "<<func(b) << endl;
			// cout<<"x = "<<x<<" f(x)="<<func(x)<<endl;
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
    srand(time(0));
    Bisection solver;
        // func(a) is nagative and func(b) is positive
         int a = solver.random() ,b = solver.random();
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