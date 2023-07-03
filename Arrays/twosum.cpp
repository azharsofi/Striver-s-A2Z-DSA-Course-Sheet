//brute force
class Solution {
    private:
    int findIndex(vector<int>& nums, int target, int excludeIndex) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target && i != excludeIndex) {
                return i;
            }
        }
        return -1; // Index not found
    }

public:
    vector<int> twoSum(vector<int>& arr, int target) {
    
        int n=arr.size();
         vector<int> sortedNums = arr; // Create a copy of the input vector
        sort(sortedNums.begin(), sortedNums.end()); // Sort the copy
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = sortedNums[left] + sortedNums[right];
        if (sum == target) {
        int index1 = findIndex(arr, sortedNums[left], -1);
                int index2 = findIndex(arr, sortedNums[right], index1);
                return {index1, index2};

        }
        else if (sum < target) left++;
        else right--;
    }
    return {-1,-1};
    }
};



//hashing
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int onemore=target-num;
            if(m.find(onemore)!=m.end()){
            return {m[onemore],i};}
            m[num]=i;

        }
        return {-1,-1};
    }
};
// sorting
class Solution {
    private:
    int findIndex(vector<int>& nums, int target, int excludeIndex) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target && i != excludeIndex) {
                return i;
            }
        }
        return -1; // Index not found
    }

public:
    vector<int> twoSum(vector<int>& arr, int target) {
    
        int n=arr.size();
         vector<int> sortedNums = arr; // Create a copy of the input vector
        sort(sortedNums.begin(), sortedNums.end()); // Sort the copy
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = sortedNums[left] + sortedNums[right];
        if (sum == target) {
        int index1 = findIndex(arr, sortedNums[left], -1);
                int index2 = findIndex(arr, sortedNums[right], index1);
                return {index1, index2};

        }
        else if (sum < target) left++;
        else right--;
    }
    return {-1,-1};
    }
};
