#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid =start + (end - start)/2;

    while(start <= end){
      if(arr[mid] == key){
        return mid;
      }
      if(key > arr[mid]){
        start = mid + 1;
      }
      else{
        end = mid-1;
      }
      mid = start + (end - start)/2;
  }
    cout << "element not found"<<endl;
    return -1;
}


int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

int etf , oetf;
cout<<"write element to find from even array "<<endl;
cin>>etf;
cout<<"write element to find from odd array "<<endl;
cin>>oetf;
int evenindex = binarysearch(even,6,etf);


cout << "index of element from" << " " << etf << " "<< "is" << evenindex <<  endl;

int oddindex = binarysearch(odd,5,oetf);



cout << "index of element from" << " " << oetf << " " << "is" << oddindex << endl;
return 0;
}