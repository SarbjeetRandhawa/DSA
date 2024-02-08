#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    void subsetsumm(int i, int sum ,vector<int> &arr, vector<int> &ans , int n){
        if(i == n){
            ans.push_back(sum);
            return;
        }

        subsetsumm(i+1,sum+arr[i],arr,ans,n);
        subsetsumm(i+1,sum,arr,ans,n);




    }

    vector<int> subsetsum( vector<int> &arr , int n){
        vector <int> ans;
       subsetsumm(0,0,arr,ans,n);
       sort(ans.begin(),ans.end());

       return ans;
       
    }

};


int main()
{
    vector <int> arr{3,1,2};
    solution ob;

    vector <int> ans = ob.subsetsum(arr,arr.size());

    cout<<"sum of each subset is: "<<endl;

    for(auto s : ans){
       cout<<s<<endl;
    }

    
    return 0;
}
