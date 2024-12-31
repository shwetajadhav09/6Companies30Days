class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();

        vector<vector<int>> image(n, vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                int total = 0, count =0;
                for(int a = i-1;a<=i+1;a++){
                    for(int b =j-1;b<=j+1;b++){
                        if(a >= 0 && a<n && b>=0 && b<m){
                            total += img[a][b];
                            count++;
                        }
                    }
                }

                image[i][j] = total/count;
            }
        }
        return image;
    }
};