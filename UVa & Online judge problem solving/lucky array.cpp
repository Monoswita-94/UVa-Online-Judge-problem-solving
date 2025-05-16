#include<iostream>
using namespace std;
  int main()
  {
   int size;
    cin >>size;
    int nums[size];
    for(int i=0;i<size;i++){
    cin>> nums[i];
    }
    int min = nums[0];
    int counter = 0;
    for(int i=0;i<size;i++){
    if(min == nums[i]){
    counter++;
    }
    if(min > nums[i]){
     min = nums[i];
     counter = 1;
     }
    }
    if(counter % 2 == 0){
    cout << "Unlucky" <<endl;
    }
    else{
    cout << "Lucky" <<endl;
    }
    }
