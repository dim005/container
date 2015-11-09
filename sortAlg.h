#include <iostream>

#include "ContainerClass.cpp"

using namespace std;

class SortAlgorithm {
public:
    virtual void sort(Container* c) = 0;
};
