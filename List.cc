#include "Container.h"
#include <list>
using namespace std;

class ListContainer : public Container(){
    public:
        int at(int);
        void swap(int, int);
        void insert(int );
        void print();
        int size();
        void set_sort(SortAlgorithm *);
        void sort();
    private:
        list<int> l;
        SortAlgorithm* listSP;
};

int ListContainer::at( int i){
    if(i > l.size() -1){
        return -1;
    }

    list<int>::iterator k = l.begin(); 
    for(int j =0; j < i; j++){
        k++;
    }

    return *k;

}
void ListContainer::swap(int i, int j){
     list<int>::iterator k = l.begin();
     list<int>::iterator j = l.begin();

     if(i > l.size() -1 || j > l.size() -1){
         return;
     }
     for(int m = 0; m < i; m++){
        k++; 
     }
     for(int m = 0; m < j; m++){
        j++;
     }
   
     int temp = *k;

     *k = *j;
     *j = temp;

     return;
}
void ListContainer::insert(int i){
    l.push_back(i);
    
    return;
}
void ListContainer::print((){
    cout<<"The list contains: ";
    for(list<int>::iterator i = l.begin(); i != l.end(); i++){
        cout<<" "<< *i;
    }
    cout<<endl;
}
int ListContainer::size(){
    print();
    return l.size();

}
void set_sort(SortAlgorithm *s){
    listSP = s;
    return;
}
void sort(){
    listSP.sort();
}
