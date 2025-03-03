#include <vector>
#include <iostream>

class Solution {
public:
    int reverse(int x) {
        long reversed_number = 0;
        while(x != 0){
            int remain = x % 10;
            reversed_number = reversed_number * 10 + remain;
            x /= 10;
        }
        if(reversed_number > INT_MAX || reversed_number < INT_MIN){
            return 0;
        }
        return (int)reversed_number;
    }
};

int main(){
    Solution a;
    std::cout << a.reverse(-123);
}