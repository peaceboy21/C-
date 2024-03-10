#include<iostream>
#include<stdio.h>
using namespace std;

bool ispresent(int arr[][3], int target, int n, int m){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
return 0;

}

void sumofrows(int arr[][3], int n, int m)
{

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
          sum += arr[i][j];    
        }
        cout << sum<< endl;
    }   
        
}

int largestrowsum(int arr[][3], int row, int col){
    int maxi = INT16_MIN;
    int rowindex = -1;

for(int row=0; row<4; row++)
    {
        int sum = 0;
        for(int col=0; col<3; col++)
        {
             sum += arr[row][col];    
        }
        if(maxi < sum){
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "maximum sum is " << maxi << endl;
    return rowindex;
        
}   





int main(){

    int arr[4][3] = {4,4377,12,67,90,32,27,870,67,1,45,20000};
/*
    cout<<"enter element to be found:"<< endl;
    int target;
    cin >> target;

    if(ispresent(arr,target,4,3)){
        cout << "present:" << endl;
    }
    else
    cout<< "not present:" << endl;
*/
   sumofrows(arr,4,3);


cout<< "largest row sum is:" << largestrowsum(arr,4,3 ) << endl;

}