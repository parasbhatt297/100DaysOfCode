def twoSum(nums: list[int], target: int):
        mp  = {}
        for i in range(len(nums)) :
            if (target - nums[i] ) in mp :
                return [mp[target-nums[i]] , i ]
            else :
                mp[nums[i]] =  i 
        return [-1,-1]

ans = twoSum([2,7,11,15], 9)
print(f"The Answer is {ans}")