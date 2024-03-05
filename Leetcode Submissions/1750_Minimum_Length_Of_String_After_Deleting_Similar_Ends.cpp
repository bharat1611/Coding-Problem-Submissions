class Solution {
public:
    int minimumLength(std::string s) {
        int left = 0, right = s.length() - 1;

        while (left < right && s[left] == s[right]) {
            char current_char = s[left];

            while (left <= right && s[left] == current_char) {
                left++;
            }
            while (left <= right && s[right] == current_char) {
                right--;
            }
        }
        return right - left + 1;
    }
};