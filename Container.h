#include <list>
#include <vector>
#include <iostream>
using namespace std;
#ifndef CONTAINER_H
#define CONTAINER_H

class SortAlgorithm;

class Container {
public:
   Container() {}
   ~Container() {}
   virtual int & at(int i) = 0;
   virtual void swap(int i, int j) = 0;
   virtual void insert(int element) = 0;
   virtual void print() = 0;
   virtual int size() = 0;
   virtual void set_sort(SortAlgorithm* s) = 0;
   virtual void sort() = 0;
};
#endif

#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

class SortAlgorithm {
public:
    virtual void sort(Container* c) = 0;
};
#endif

#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
class VectorContainer : public Container {
public:
   VectorContainer() : Container() {}
   ~VectorContainer() {}
   virtual int & at(int i) { return m_vecInts.at(i); }
   virtual void swap(int i, int j);
   virtual void insert(int element) { m_vecInts.push_back(element); }
   virtual void print();
   virtual int size() { return m_vecInts.size(); }
   virtual void set_sort(SortAlgorithm* s) { vecSP = s; }
   virtual void sort() { vecSP->sort(this); }
private:
   vector<int> m_vecInts;
   SortAlgorithm* vecSP;
};

void VectorContainer::swap(int i, int j)
{
   int temp = i;
   m_vecInts.at(i) = j;
   m_vecInts.at(j) = temp;
}

void VectorContainer::print()
{
   for (int i = 0; i < m_vecInts.size(); i++)
   {
      cout << m_vecInts.at(i) << endl;
   }
}
#endif

#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H
class ListContainer: public Container{
    public:
        int & at(int);
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

int & ListContainer::at( int i){

    list<int>::iterator k = l.begin(); 
    for(int j =0; j < i; j++){
        k++;
    }

    return *k;

}
void ListContainer::swap(int i, int j){
     list<int>::iterator k = l.begin();
     list<int>::iterator p = l.begin();

     if(i > l.size() -1 || j > l.size() -1){
         return;
     }
     for(int m = 0; m < i; m++){
        k++; 
     }
     for(int m = 0; m < j; m++){
        p++;
     }
   
     int temp = *k;

     *k = *p;
     *p = temp;

     return;
}
void ListContainer::insert(int i){
    l.push_back(i);
    
    return;
}
void ListContainer::print(){
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
void ListContainer::set_sort(SortAlgorithm *s){
    listSP = s;
    return;
}
void ListContainer:: sort(){
    listSP->sort(this);
}
#endif

