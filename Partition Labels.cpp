class Solution {
public:

    bool isValid(string& s, int k){
        unordered_set<char> st;
        for(int i = 0 ; i <= k; i++){
            st.insert(s[i]);
        }
        for(int i = k+1; i < s.size(); i++){
            if(st.count(s[i]) != 0){
                return false;
            }
        }
        return true;
    }

    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int i = 0;
        while(i < s.size()){
            if(isValid(s, i)){
                s.erase(0, i+1);
                ans.push_back(i+1);
                i = 0;
            }else{
                i++;
            }
        }
        return ans;
    }
};
