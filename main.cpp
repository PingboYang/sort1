#include <iostream>
using namespace std;

void printArr(int a[],string names[] int s);
int const SIZE=4;


int main() {
  bool swap=true;
  int countCompare=0;
 int a[]={10,20,30,40}, temp;
  string names[]={"Peter","Bill", "Mary", "Jim"};
   printArr(a,SIZE);
  for(int pass=1; pass<=SIZE-1; pass++){
    if(swap){
      swap=false;
      for(int pos=0; pos<SIZE-pass; pos++){
      countCompare++;
    if(a[pos]>a[pos+1]){
      swap=true;
      temp=a[pos+1];
      a[pos+1]=a[pos];
      a[pos]=temp;
    }
  }
    }
    
    printArr(a,names,SIZE);
}
  
  printArr(a,SIZE);
  cout<<"\ncountCompare="<<countCompare;
}
void printArr(int a[], string name[], int s){
  cout<<endl<<"---------------------------------------------------";
  for(int i=0; i<s; i++){
    cout<<"\n\n"<<a[i];
  }
}