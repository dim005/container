#include "Container.h"
#ifndef SELECTIONSORT_H
#define SELCTIONSORT_H
class SelectionSortAlgorithm : public SortAlgorithm {
    public:
        void sort(Container *);
};

void SelectionSortAlgorithm::sort (Container *c) {
    int min;
    int i, j, k;
    

    for (j = 0; j < c->size()-1; j++) {
        min = j;
        for( i = j+1; i < c->size(); i++) {
            if(c->at(i) < c->at(min)) {
                min = i;
            }
        }
        if( min != j) {
            c->swap(j, min);
        }
    }
}
#endif
