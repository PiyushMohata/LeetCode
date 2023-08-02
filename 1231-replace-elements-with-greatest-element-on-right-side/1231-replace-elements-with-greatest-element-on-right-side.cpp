class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int x=-1,y;
        for(int i=arr.size()-1; i>=0; i--)
        {
            y=arr[i];
            arr[i]=x;
            x=max(x,y);
        }
        return arr;
    }
};