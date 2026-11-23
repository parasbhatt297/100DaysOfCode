def longestOnes(nums: list[int], k: int) -> int:
        n  = len(nums) 
        l =ans = 0
        for r in range(len(nums)) :
            k -= (1- nums[r])
            while k<0 :
                k+=(1-nums[l])
                l+=1
            ans = max(ans , r-l+1)
        return ans

nums = list(map(int, input("Enter nums value : ").split()))
k = int(input("Enter value of k : "))
print(f"Length of Longest 1's Subarray is : {longestOnes(nums , k)}")