#include "sortAlg.h"

class SelectionSortAlgorithm::SortAlgorithm() {
    public:
        void sort(Container *);
};

void SelectionSortAlgorithm::sort (Container *c) {
    int min;
    int i, j, k;
    
    for (auto it = c.begin(); it != c.end(); it++) {
        k++;
    }

    for (j = 0; j < k-1; j++) {
        min = j;
        for( i = j+1; i < k; i++) {
            if(c.at(i) < c.at(min)) {
                min = i;
            }
        }
        if( min != j) {
            swap(c.at(j), c.at(min));
        }
    }
}
