using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        //lambda function
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;
            }
            return freq[a] < freq[b]; 
        });
        return nums;
    }
};



/*

//t.c=o(n+maxx)    s.c=o(maxx)
int maxx=0;
for(int i=0; i<arr.size(); i++)
    maxx= max(maxx,arr[i]);

int count[maxx]={0};

for(int i=0; i<arr.size(); i++)
    count[arr[i]]++;

for(int i=0; i<=maxx; i++){
    int tmp = count[i];
    while(tmp--)
        arr[i]=count[i];
}
*/
