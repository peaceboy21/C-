#include <iostream>
#include <climits>
using namespace std;
 
int getmax(int num[],int n){

   int max = INT_MIN;
  
for(int i = 0;i<n;i++){
    if (num[i]>max){
        max = num[i];
    }
}


return max;
}

int main(){

int size;
cout << "enter the size of array";
cin>> size;

int num[100];

cout << "enter elements" << endl;
for (int i=0;i<size;i++){
    cin>>num[i];
}


cout << "max element is" << endl;
cout<< getmax(num,size) <<endl;

}