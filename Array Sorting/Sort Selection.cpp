//Selecting & swapping smallest element of unsorted/right part of array with the 1st element of unsorted array. [trick: sss:selection swapping smallest]
//t.c=o(n^2) s.c=o(1)
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        
        for(int i = 0; i < n-1 ; i++)  {
            int minimum = i ;
            for(int j = i+1; j < n ; j++ ) {
                if(nums[ j ] < nums[ minimum ])  {
                    minimum = j ;
            }
            }
            swap (nums[minimum], nums[i]) ; 
        }
        return nums;
    }
};
