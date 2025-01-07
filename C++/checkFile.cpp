#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string compressedString(string word) {
        vector<int> count;
        vector<char> letter;

        for(int i = 0; i < word.size(); i++) {
            bool found = false;
            for(int j = 0; j < letter.size(); j++) {
                if(letter[j] == word[i]) {
                    count[j]++;
                    found = true;
                    break;
                }
            }
            if(!found) {
                letter.push_back(word[i]);
                count.push_back(1);
            }
        }
        return print(count, letter);
    }

    string print(vector<int> a, vector<char> b) {
        string returnString;
        for(int i = 0; i < b.size(); i++) {
            while(a[i] > 9) {
                returnString += "9";
                returnString.push_back(b[i]);
                a[i] -= 9;
            }
            returnString += to_string(a[i]);
            returnString.push_back(b[i]);
        }

        return returnString;
    }
};

int main(){
    string word = "arabaaaaaaaaaa";
    Solution a;
    cout << a.compressedString(word) << endl;

    return 0;
}




