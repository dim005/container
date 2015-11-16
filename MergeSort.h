#include "Container.h"
#ifndef MERGESORTALGORITHM_H
#define MERGESORTALGORITHM_H

class MergeSortAlgorithm : public SortAlgorithm {
    public:
        void sort (Container*);
        Container * merge (Container*, Container*);
};

Container* MergeSortAlgorithm::merge (Container* left, Container* right) {
    Container* result; 
    while (left->size() > 0 || right->size() > 0) {
        if (left->size() > 0 && right->size() > 0) {
            if (left->at(0) <= right->at(0)) {
                result->insert(left->at(0));       
                left->erase();  
            }
            else {
                result->insert(right->at(0));
                right->erase();
            }
        }
        else if (left->size() > 0 ) {
            for (int i = 0; i < left->size(); i++) {
                result->insert(left->at(i));
            }
            break;
        }
        else if (right->size() > 0 ) {
            for (int i = 0; i < right->size(); i++) {
                result->insert(right->at(i));
            } 
            break;
        } 
    }

    return result;
}
   
void MergeSortAlgorithm::sort(Container* c) {
    if (c->size() <= 1)
        return c;   
  
    //int c_original_size = c->size();
 
    int middle = (c->size()+1)/2;

    Container* left,* right,* result;

    for (int i = 0; i < middle; i++) {
        left->insert(c->at(i));
    }         

    for (int i = middle; i < c->size(); i++) {
        right->insert(c->at(i));
    }
    
    left = sort(left);
    right = sort(right);
    result = merge(left, right);
    c = result;
}

#endif
