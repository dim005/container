#include "Container.h"
#ifndef MERGESORTALGORITHM_H
#define MERGESORTALGORITHM_H
class MergeSortAlgorithm : public SortAlgorithm {
    public:
        void sort (Container*);
 //       Container * merge (Container*, Container*);
};

// should this function return a Container or Container ptr? Also, what does
// result equal when returned?
/*Container* MergeSortAlgorithm::merge (Container* left, Container* right) {
    Container* result; 
    int j =0;
    while (left->size() > j || right->size() > j) {
        if (left->size() > j && right->size() > j) {
            if (left->at(j) <= right->at(j)) {
                result->insert(left->at(j));
                j++;  
            }
            else {
                result->insert(right->at(j));
                j++;
            }
            if (left->size() > 0 ) {
                for (int i = 0; i < left->size(); i++)
                    result->insert(left->at(i));
                break;
            }
            else if (right->size() > 0 ) {
                for (int i = 0; i < right->size(); i++)
                    result->insert(right->at(i));
                break;
            }
        } 
    }
    return result;
}
*/
void MergeSortAlgorithm::sort(Container* c) {
    if (c->size() <= 1)
        return;   
     
    int middle = (c->size()+1)/2;
    
    Container* left,* right;

    for (int i = 0; i < middle; i++)
        left->insert(c->at(i));

    for (int i = middle; i < c->size(); i++)
        right->insert(c->at(i));
    int j =0;
    while (left->size() > j || right->size() > j) {
        if (left->size() > j && right->size() > j) {
            if (left->at(j) <= right->at(j)) {
                c->insert(left->at(j));
                j++;  
            }
            else {
                c->insert(right->at(j));
                j++;
            }
            if (left->size() > 0 ) {
                for (int i = 0; i < left->size(); i++)
                    c->insert(left->at(i));
                break;
            }
            else if (right->size() > 0 ) {
                for (int i = 0; i < right->size(); i++)
                    c->insert(right->at(i));
                break;
            }
        } 
    }
}
#endif
