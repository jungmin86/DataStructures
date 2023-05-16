//
//  main.cpp
//  LAB09_#1
//
//  Created by Jungmin Kim on 2023/05/16.
//

#include <iostream>
#include "TreeType.h"
using namespace std;

int main(int argc, const char * argv[]) {
    TreeType A;
    TreeNode* B;
    TreeNode* C;

    A.InsertItem('d');
    A.InsertItem('c');
    A.InsertItem('e');
    A.InsertItem('z');
    A.InsertItem('f');
    B = A.GetRoot();
    C = A.PtrToSuccessor(B); 
    A.PrintNode(C);
    return 0;
}
