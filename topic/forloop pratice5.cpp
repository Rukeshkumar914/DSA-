#include<iostream>
using namespace std;
class Solution {
    public:
        int subtractProductAndSum(int n) {
            
            int prod = 1;
            int sum = 0;
            
            while(n!=0) {
                
                int digit = n%10;
                prod = prod * digit;     
            
                sum = sum + digit;
                
                n = n/10;
            }
            
            int answer = prod - sum;
            return answer;
        }
    };

    int main(){
        Solution s;

        int answer = s.subtractProductAndSum(41123);
        cout << "output : " << answer << endl;
        return 0;
    }