


#include <iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0 ;
    int right = (n*m)-1;
    while(left<=right){
        int mid = (left+right)/2;

        if(matrix[mid/m][mid%m]==target){
            return true;
        }else if(matrix[mid/m][mid%m]<target){
            left=mid+1;
        }else{
            right = mid-1;
        }

    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
    return 0;
}
