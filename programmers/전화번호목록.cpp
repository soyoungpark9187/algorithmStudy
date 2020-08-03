#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int p_size = phone_book.size();
    for (int i=0; i<p_size; i++) {
        string front = phone_book.at(i);
        int s_size = front.length();
        for (int j=0; j<p_size; j++) {
            if (phone_book.at(j).substr(0, s_size).find(front) != string::npos
               && i!=j)
                return false;
        }
    }
    return true;
}
