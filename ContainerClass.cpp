// Student: Erin Mullally
// SID: 860854551
// Course: CS100 Fall 2015
// Lab Section: 22
// Lab: Lab 6
// File: ContainerClass.cpp

#include <iostream>
#include <vector>
#include "MergeSort.cc"
#include "SelectionSort.cc"
#include "BubbleSort.cc"
#include "List.cc"
#include "sortAlg.h"
#include "main.cpp"

using namespace std;

class Container {
public:
   Container() {}
   ~Container() {}
   virtual int at(int i) = 0;
   virtual void swap(int i, int j) = 0;
   virtual void insert(int element) = 0;
   virtual void print() = 0;
   virtual int size() = 0;
   virtual void set_sort(SortAlgorithm* s) = 0;
   virtual void sort() = 0;
};

class VectorContainer : public Container {
public:
   VectorContainer() : Container() {}
   ~VectorContainer() {}
   virtual int at(int i) { return m_vecInts.at(i); }
   virtual void swap(int i, int j);
   virtual void insert(int element) { m_vecInts.push_back(element); }
   virtual void print();
   virtual int size() { return m_vecInts.size(); }
   virtual void set_sort(SortAlgorithm* s) { vecSP = s; }
   virtual void sort() { vecSP.sort(this); }
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

/*
class ListContainer : public Container {
public:
   ListContainer() {}
   ~ListContainer() {}
   virtual int at(int i) { return this[i]; }
private:
   list<int> m_listInts;
   SortAlgorithm* listSP;

};

class SortContainer {
public:
   SortContainer() {}
   ~SortContainer() {}
   virtual void sort(Container* c) = 0;
};

class SelectionSortAlgorithm : public SortContainer {
public:
   SelectionSortAlgorithm() : SortContainer() {}
   ~SelectionSortAlgorithm() {}
   virtual void sort(Container* c);
};

class BubbleSortAlgorithm : public SortContainer {
public:
   BubbleSortAlgorithm() : SortContainer() {}
   ~BubbleSortAlgorithm() {}
   virtual void sort(Container* c);
};

class MergeSortAlgorithm : public SortContainer {
public:
   MergeSortAlgorithm() : SortContainer() {}
   ~MergeSortAlgorithm() {}
   virtual void sort(Container* c);
};

int main(void)
{

   return 0;
}
*/
