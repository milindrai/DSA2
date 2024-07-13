// For fully sorted matrix i,e last element of 1st row is greater than 1st elem of 2nd rowTc thenn, search normally 0-n*m binaryt searach with index mat[/][%] =(log(n*m)) = o(logn + logm)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = n * m - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midElement = matrix[mid / m][mid % m];

            if (midElement == target) {
                return true;
            } else if (midElement < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};

// For row wise & column wise sorted matrix : Start searching from mat[0][n-1] if(tar>mat) j--; else i++; =o(n) linear
//       First find the row in which it can be by searching in logm 
//       Then search in that row in logn
