class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > ret (numRows);
        if(numRows < 1){
            return ret;
        }
        vector<int>& row0 = ret[0];
        row0.push_back(1);
        for( int i = 1; i < numRows; ++i ){
            vector<int>& row = ret[i];
            row.resize(i+1);
            vector<int>& pRow = ret[i-1];
            row[0] = row[i] = 1;
            for( int j = 1; j < (i+2)/2; ++j ){
                row[j] = row[i-j] = pRow[j-1] + pRow[j];
            }
        }
        return ret;
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.reserve(numRows);
        while(res.size()<numRows){
            vector<int> v(res.size()+1, 1);
            for(int i=1; i<=(res.size())/2; ++i){
                v[i]=v[v.size()-1-i]=res.back()[i]+res.back()[i-1];
            }
            res.push_back(v);
        }
        return res;
    }
};