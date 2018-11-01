// Main driver and testing code for binary search tree implementation
// Author: Ryan Shim
// Date: 11-1-2018
#include <iostream>
#include <cassert>
#include "BST.h"

using namespace std;

int main() {
    int numPassed = 0;
    int numTests = 3;
    BinarySearchTree<int> myTree;

    myTree.insertVal(2);
    myTree.insertVal(1);
    myTree.insertVal(3);
    myTree.inorderPrint(myTree.getRoot());

    std::cout << "TESTING getMinimum() ";
    assert(myTree.getMinimum() == 1);
    std::cout << " ---> PASSED" << std::endl;
    numPassed++;

    std::cout << "TESTING getMaximum() ";
    assert(myTree.getMaximum() == 3);
    std::cout << " ---> PASSED" << std::endl;
    numPassed++;

    std::cout << "TESTING inorderPrint() ";
    myTree.inorderPrint(myTree.getRoot());
    std::cout << " ---> PASSED" << std::endl;
    numPassed++;

    std::cout << "PASSED " << numPassed << "/" <<numTests << " TESTS" << std::endl;

    return 0;
}
