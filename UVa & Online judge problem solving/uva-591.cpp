#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=1,move=0,sum,avg,arr[n];
while(cin>>n){
        sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
     avg = sum / n;
  for(int i=0;i<n;i++){
    if(arr[i]>avg){
        move+=arr[i] - avg;
    }
}
 cout<< "Set #" <<count++ <<endl;
 cout<<"The minimum number of moves is "<< move <<".";
 cout<< endl;
}
return 0;
}
