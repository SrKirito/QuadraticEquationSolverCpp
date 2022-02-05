#include <iostream>
#include <cmath>

using namespace std;

int findRoots(int a, int b, int c){
    
    
    int dis_form = b * b - 4 * a * c;
    int sqrt_val = sqrt(dis_form);

    if (dis_form > 0){
        cout << "\nReal and different roots " << endl;
        
        cout << (-b + sqrt_val) / (2 * a) << endl;
        cout << (-b - sqrt_val) / (2 * a) << endl;
    }
    else if (dis_form == 0){  
        cout << "\nReal and same roots" << endl;

        cout << -b / (2 * a) << endl;
    }

    else {
        cout << "\nComplex Roots" << endl;

        cout << - b / (2 * a) << " + " << sqrt_val << "i"  << endl;
        cout << - b / (2 * a) << " - " << sqrt_val << "i"  << endl;
    }

    return 0;
}

int main(){
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a == 0){  
        cout << "Input correct quadratic equation\n";

        return 0;
    }

    else {
        findRoots(a, b ,c);
    }
}