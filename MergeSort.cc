#include "sortAlg.h"

class MergeSort:: sortAlg() {
    public:
        void sort (Container*) { }


};

void merge(

void MergeSort::sort(Container* c) {
    if (c.size() <= 1)
        return c;   

    int i, j, k;
    auto itB = c.begin();
    auto itE = c.end(); 
    
    for (itB; itB != itE; itB++) 
        k++;
     
    int middle = (c.size()+1)/2;
    
    Container left, right, result;

    for (int i = 0; i < middle; i++)
        left.insert(c.at(i));

    for (int i = middle; i < c.size(); i++)
        right.insert(c.at(i));
    
    left = mergeSort(left);
    right = mergeSort(right);
    result = merge(left, right);
}
