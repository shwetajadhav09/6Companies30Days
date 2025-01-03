class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> winner;
        for(int i=1;i<=n;i++){
            winner.push_back(i);
        }

        int start = 0;
        while(winner.size() > 1){
            int ind = (start+k - 1)%winner.size();
            winner.erase(winner.begin() + ind);

            start = ind;
        }

        return winner.front();
    }
};