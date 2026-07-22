class Solution {
public:
    int xorOperation(int n, int start) {
        int b=start;
        for(int i=1;i<n;i++){
             b=b^(start+2*i);
        }
        return b;
        
    }
};