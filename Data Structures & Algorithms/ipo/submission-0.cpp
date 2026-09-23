class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int , int>> p;

        for(int i = 0; i < profits.size(); i++)
            p.push_back({capital[i] , profits[i]});

        sort(p.begin() , p.end());

        priority_queue<int>pq;
        int i = 0;

        for(int cnt = 0; cnt < k ; cnt++){

            while(i < p.size() && p[i].first <= w){
                pq.push(p[i].second);
                i++;
            }
            if(pq.empty())
                return w;
            
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};