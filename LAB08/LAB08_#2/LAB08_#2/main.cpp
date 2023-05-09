//
//  main.cpp
//  LAB08_#2
//
//  Created by Jungmin Kim on 2023/05/09.
//

#include <iostream>
using namespace std;

int Fibonacci_recursive(int n);
int Fibonacci_non_recursive(int n);

int main(int argc, const char * argv[]) {
    cout << Fibonacci_recursive(10) << endl;
    cout << Fibonacci_non_recursive(10) << endl;
}

int Fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else if (n == 2) return 1;
    else
        return Fibonacci_recursive(n-1) + Fibonacci_recursive(n-2);
    
}
int Fibonacci_non_recursive(int n) {
    int first, second, third;
    if (n == 1 || n == 2) return 1;
    else {
        first = 1;
        second = 1;
        for (int i = 3; i <= n; i++) {
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
}
