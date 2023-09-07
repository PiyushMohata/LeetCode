class StockSpanner {
    stack<pair<int,int>>st;
    int y=-1,count=1;
    vector<int>ans;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        y++;
        if(!st.empty() && price>=st.top().second)
        {
            count=1;
            while(!st.empty() && st.top().second<=price)
            {
                count+=ans[st.top().first];
                st.pop();
            }
            ans.push_back(count);
            st.push({y,price});
            return count;
        }
        else
        {
            st.push({y,price});
            ans.push_back(1);
            return 1;
            
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */