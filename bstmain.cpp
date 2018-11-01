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

    std::cout << "1. TESTING CONSTRUCTOR BinarySearchTree() ";
    assert(myTree.size() == 0);
    assert(myTree.root() == nullptr);
    std::cout << " -->PASSED" << std::endl;

    myTree.insertVal(2);
    myTree.insertVal(1);
    myTree.insertVal(3);

    std::cout << "2. TESTING getMinimum() ";
    assert(myTree.getMinimum() == 1);
    std::cout << " ---> PASSED" << std::endl;
    numPassed++;

    std::cout << "3. TESTING getMaximum() ";
    assert(myTree.getMaximum() == 3);
    std::cout << " ---> PASSED" << std::endl;
    numPassed++;

    std::cout << "4. TESTING preorderPrint() ";
    myTree.preorderPrint(myTree.root());

    std::cout << "5. TESTING inorderPrint() ";
    myTree.inorderPrint(myTree.root());

    std::cout << "6. TESTING postorderPrint() ";
    myTree.postorderPrint(myTree.root());

    std::cout << "PASSED " << numPassed << "/" << numTests << " TESTS" << std::endl;

    return 0;
}
