#include<bits/stdc++.h>
using namespace std;
int main(){
 int row,column;
 cin>>row>>column;
 int arr[row][column];
 for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cin>>arr[i][j];
    }
 }
 int search;
 cin>>search;
 int flag = 0;
 for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        if(arr[i][j] == search){
            flag = 1;
            break;
        }
    }
  }
  if(flag == 1){
    cout<<"will not take number"<<endl;
  }
  else{
   cout<<"will take number"<<endl;
  }
}
