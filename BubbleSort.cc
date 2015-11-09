#include "sortAlg.h"

class BubbleSort: public SortAlgorithm(){
    public:
       void  sort( Container *);
};



void BubblseSort::sort(Container *c){
    for(int i = 0; i < c.size(); i++){
        for(int j = 0; j < c.size() -1; j++){
            if(c.at(j)>c.at(j+1)){
                c.swap(j, j+1);
            }
        }
    }

}
