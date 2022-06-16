class Solution {
public:
    void print(vector<int> v){
        for(int i=0 ;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);
        int p=1;
        for(int i=0 ; i<n ;i++){
            p*=nums[i];
            
            left[i]=p;
        }
        
        print(left);
        print(right);
        
        p=1;
        // cout<<"p"<<left[0];
        for(int i =n-1;i>=0;i--){
            p*=nums[i];
            // cout<<"p "<<p<<endl;
            right[i]=p;
        }
        
        ans[0]=right[1];
        ans[n-1]=left[n-2];
        for(int i=1; i<n-1;i++){
            ans[i]=left[i-1]*right[i+1];
        }
        
        return ans;
    }
};
