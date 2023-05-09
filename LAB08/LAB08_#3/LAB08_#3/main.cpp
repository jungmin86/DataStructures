//
//  main.cpp
//  LAB08_#3
//
//  Created by Jungmin Kim on 2023/05/09.
//

#include <iostream>
#include <cmath>

float SqrRoot_recursion (float number, float approx, float tol) {
    if(fabs(approx*approx - number) <= tol)
        return approx;
    else
        return SqrRoot_recursion(number, (approx*approx + number) / (2 * approx), tol);
}

float SqrRoot_non_recursion (float number, float approx, float tol) {
    
    while (fabs(approx*approx - number) > tol) {
        approx = (approx*approx + number) / (2 * approx);
    }
    return approx;
}
int main(int argc, const char * argv[]) {
    std::cout << SqrRoot_recursion(2, 1, 0.1) << std::endl;
    std::cout << SqrRoot_non_recursion(2, 1, 0.1) << std::endl;
}
