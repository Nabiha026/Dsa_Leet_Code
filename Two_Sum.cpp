//Two_Sum Lwwt code
//O(n^2) time complexity
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first;
        int second;
        vector<int>result;
        long long sum;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                sum = nums[i]+nums[j];
                  if(sum==target){
                     first = i;
                    second=j;
                    break;
                  }
            }
        
    }
    result.push_back(first);
    result.push_back(second);
    return result;
    }
};
int main(){
    Solution s;
    vector<int>input;
    int n;
    cin >> n;
    int t;
    while(n--){
        cin >> t;
        input.push_back(t);
    }
    int target;
    cin >> target;
    vector<int>result=s.twoSum(input,target);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
}