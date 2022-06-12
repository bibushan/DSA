class Solution {
public:
  int mySqrt(int x) {
    if (x <= 1)
      return x;
    int left = 1, right = x / 2, sol = 0;
    while (left <= right) {
      int mid = (left + (right - left) / 2);
      long temp = (long)mid * (long)mid;
      if (temp == x)
        return mid;
      else if (temp < x) {
        sol = mid;
        left = mid + 1;
      } else
        right = mid - 1;
    }
    return sol;
  }
};