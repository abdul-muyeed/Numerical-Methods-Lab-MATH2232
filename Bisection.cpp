#include <bits/stdc++.h>
using namespace std;

#define EPSILON 0.001

class Bisection {
public:
    int arr[4] = {0, 1, 0, -1};

    double func(double x) {
        return arr[0] * x * x * x + arr[1] * x * x + arr[2] * x + arr[3];
    }

    int random() {
        int lb = -100;
        int ub = 100;
        return (rand() % (ub - lb + 1)) + lb;
    }

    void bisection(double a, double b) {
        double x = a;
        int i = 0;
        while (abs(b - a) >= EPSILON) {
            x = (a + b) / 2;
            cout<< ++i <<". a="<<a<<" f(a)="<<func(a)<<" | b="<<b<<" f(b)="<<func(b)<<" | x="<<x<<" f(x)="<<func(x)<<endl;
            if (func(x) == 0.0)
                break;
            else if (func(x) * func(a) < 0)
                b = x;
            else
                a = x;
        
        
        }
        cout << "The value of root is: " << x << endl;
    }
};

int main() {
    srand(time(0));
    Bisection solver;

    int a = solver.random(), b = solver.random();
    int t1 = 1000, t2 = 1000;

    while (solver.func(a) >= 0 && --t1)
        a = solver.random();

    while (solver.func(b) <= 0 && --t2)
        b = solver.random();

    if (solver.func(a) * solver.func(b) >= 0) {
        cout << "Bisection Method can't find the root of the equation. Try another method." << endl;
        return 0;
    }

    cout << "You have assumed " << a << " and " << b << endl;
    solver.bisection(a, b);

    return 0;
}
