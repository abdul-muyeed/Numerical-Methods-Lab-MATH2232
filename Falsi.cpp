#include <bits/stdc++.h>
using namespace std;

#define EPSILON 0.01

class Falsi {
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

    void falsi(double a, double b) {
        double x = a, prev_x = INT_MAX;
        int i = 0;
        while (abs(b - a) >= EPSILON) {
            x = (a * func(b) - b * func(a)) / (func(b) - func(a));
            cout<< ++i <<". a="<<a<<" f(a)="<<func(a)<<" | b="<<b<<" f(b)="<<func(b)<<" | x="<<x<<" f(x)="<<func(x)<<endl;
            if (func(x) == 0.0){
                break;
            }else if (func(x) * func(a) < 0){
                b = x;
            }else{
                a = x;
            }
            if (prev_x == x){
                break;
            }
                

            prev_x = x;
        }
        cout << "The value of root is: " << x << endl;
    }
};

int main() {
    srand(time(0));
    Falsi solver;

    int a = solver.random(), b = solver.random();

    while (solver.func(a) > 0)
        a = solver.random();

    while (solver.func(b) < 0)
        b = solver.random();

    cout << "You have assumed " << a << " and " << b << endl;
    solver.falsi(a, b);

    return 0;
}
