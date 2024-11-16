// 24125069
// HUYNH KHANH MINH
// 24A01
class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        int l = 1;
        int r = x / 2;
        if (x <= 1) {
            return x;
        }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long square = static_cast<long long>(mid) * mid;
            if (square == x) {
                return mid;
            }
            else if (square < x) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};