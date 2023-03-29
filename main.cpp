#include <iostream>
using namespace std;

void printArr(int a[],string names[], int s);
int const SIZE=4;


int main() {
  bool swap=true;
  int countCompare=0;
 int a[]={40,30,20,10}, temp;
  string names[]={"Peter","Bill", "Mary", "Jim"};
  string tempStr;
   printArr(a,names,SIZE);
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

      tempStr=names[pos+1];
      names[pos+1]=names[pos];
      names[pos]=tempStr;
    }
  }
    }
    
    printArr(a,names,SIZE);
}
  
  printArr(a,names,SIZE);
  cout<<"\ncountCompare="<<countCompare;
}
void printArr(int a[], string name[], int s){
  cout<<endl<<"---------------------------------------------------";
  for(int i=0; i<s; i++){
    cout<<"\n\n"<<name[i]<<a[i];
  }
}