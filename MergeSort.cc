#include "sortAlg.h"

class MergeSortAlgorithm::SortAlgorithm() {
    public:
        void sort (Container*);
        void merge (Container*, Container*);
};

Container MergeSortAlgorithm::merge (Container* left, Container* right) {
    Container result; 
    
    while (left.size() > 0 || right.size() > 0) {
        if (left.size() > 0 && right.size() > 0) {
            if (left.front() <= right.front()) {
                result.insert(left.front());
                left.erase(left.begin());
            }
            else {
                result.insert(right.front());
                right.erase(right.begin();
            }
            else if (left.size() > 0 ) {
                for (int i = 0; i < left.size(); i++)
                    result.insert(left.at(i));
                break;
            }
            else if (right.size() > 0 ) {
                for (int i = 0; i < right.size(); i++)
                    result.insert(right.at(i));
                break;
            }
        } 
    }
    return result;
}

void MergeSortAlgorithm::sort(Container* c) {
    if (c.size() <= 1)
        return c;   
     
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
