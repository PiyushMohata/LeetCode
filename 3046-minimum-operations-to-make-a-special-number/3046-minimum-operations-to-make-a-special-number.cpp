class Solution {
public:
    int minimumOperations(string num) {
        unordered_map<int,vector<int>>m;
        int sum1=INT_MAX,ans=INT_MAX,y;
        
        for(int i=0; i<num.size(); i++)
        {
            string s(1, num[i]);
            m[(stoi(s))].push_back(i);
        }
        
        for(auto x:m)
        {
            vector<int>v=x.second;
            if(x.first==0)
            {   
                if(m.find(5)!=m.end())
                {
                    vector<int>v1=m[5];
                    for(int i=0; i<v1.size(); i++)
                    {
                        if(v[v.size()-1]>v1[i])
                        {
                            y=v1[i];
                        }   
                    }
                    sum1 = num.size() - y - 2;
                    ans = min(ans,sum1);
                }

                if(m.find(0)!=m.end())
                {
                    vector<int>v1=m[0];
                    for(int i=0; i<v1.size(); i++)
                    {
                        if(v[v.size()-1]>v1[i])
                        {
                            y=v1[i];
                        }   
                    }
                    sum1 = num.size() - y - 2;
                    ans = min(ans,sum1);
                }
            }
            
            if(x.first==5)
            {
                if(m.find(2)!=m.end())
                {
                    vector<int>v1=m[2];
                    for(int i=0; i<v1.size(); i++)
                    {
                        if(v[v.size()-1]>v1[i])
                        {
                            y=v1[i];
                        }   
                    }
                    sum1 = num.size() - y - 2;
                    ans = min(ans,sum1);
                }
                
                if(m.find(7)!=m.end())
                {
                    vector<int>v1=m[7];
                    for(int i=0; i<v1.size(); i++)
                    {
                        if(v[v.size()-1]>v1[i])
                        {
                            y=v1[i];
                        }   
                    }
                    sum1 = num.size() - y - 2;
                    ans = min(ans,sum1);
                }
            }
        }
        int temp = num.size()-m[0].size();
        ans = min(ans,temp);
        return ans;
    }
};