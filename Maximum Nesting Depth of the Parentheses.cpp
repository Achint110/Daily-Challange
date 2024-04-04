class Solution {
public:
    int maxDepth(string s) {
        int count=0,dep=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            count++;
            else if(s[i]==')')
            count--;

            dep=max(dep,count);
        }
              
            //   if(count!=0)
            return dep;

    }
};