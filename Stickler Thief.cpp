for(int i=nums.length-1; i>=0; i--){
        dp[i] = Math.max(nums[i] + dp[i+2], dp[i+1]);
    }
    return dp[0];
}