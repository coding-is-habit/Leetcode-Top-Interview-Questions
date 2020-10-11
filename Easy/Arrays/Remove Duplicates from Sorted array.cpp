
    int removeDuplicates(vector<int>& nums)
    {
	    nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
        
	    return nums.size() ;
    }
   
// 2 pointer approach
int removeDuplicates(vector<int>& nums)
    {
	   int i=0;
     for(int j = 0;j<nums.size();j++){
       if(nums[j]!=nums[i])
        nums[++i]=nums[j];
     }   
	    return i+1 ;
    }