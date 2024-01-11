#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int main[3]={1,1,2};
    
     
       int arr[3]={0};
       int ans;
       for(int i = 0 ; i < 3 ; i++){
           arr[main[i]]++;
       }
       for(int i = 0; i< 3 ; i++){
           if(arr[i]>1){
             ans=i;
           }
       }
       cout<<ans;

    return 0;
}
