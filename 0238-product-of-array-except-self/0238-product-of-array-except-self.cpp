class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> output(n);
        
        if(n<1) return output;
        
       
        
    
        int prod = 1;
        
        for(int i=0;i<n;i++){
            output[i]=prod;
            prod=prod*nums[i];
        }
        
        int revprod = 1;
        
        for(int i=n-1;i>=0;i--){
            
            output[i]=output[i]*revprod;
            revprod=revprod*nums[i];
        }
        
        
        return output;
        
        
    }
};