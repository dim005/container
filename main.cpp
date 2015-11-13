#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
using namespace std;

int main() {
    ListContainer bob;
    Container * billy = &bob;
    
    BubbleSortAlgorithm chris;
    SortAlgorithm *mike = &chris;
 
    billy->insert(5);
    billy->insert(9);
    billy->insert(1);

   cout<<billy->size()<<endl;    
    billy->set_sort(mike);
    billy->sort();
    billy->print();
    return 0;
}
