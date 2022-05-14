class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //we will be using 2 pointer method here to code
        //we will first make vector pairs
        
        vector<pair<int,int> >v;
        //next we will store the indexes and the value
    
        for(int i=0;i<nums.size();i++)  v.push_back({nums[i],i});
        //next we will sort the array as it will help to track correct index
        
        sort(v.beign(),v.end());
        //now we will declare 2 pointers i and j
        int i = 0, j=num.size()-1;
        //we will declare 2 indexed which will help to store our 2 indexes
          while(i<j){
            
              if(v[i].first + v[j].first == target){
                  idx1 = v[i].second;
                  idx2 = v[j].second;
                  break;
              }
              // less than target we wll do i++
                if(v[i].first + v[j].first < target) i++;
              //greater value than target will do 
                if(v[i].first + v[j].first > target j--;
     
                   }
             return(idx1,idx2);
    }
};
                   
                   //time complexity o(nlogn)
                   //space complexity -o(1)
