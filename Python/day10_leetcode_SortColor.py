def sortColors(nums: list[int]):
        low , mid , high , n = 0,0,len(nums)-1 , len(nums)
        while mid<=high:
            if nums[mid]==0:
                nums[low] , nums[mid] = nums[mid] , nums[low]
                low , mid = low+1 , mid+1
            elif nums[mid]==2:
                nums[mid],nums[high] = nums[high],nums[mid]
                high = high-1
            else : mid = mid+1
nums = [2,0,2,1,1,0]
print(f"Before SortColor function: {nums}")
sortColors(nums)
print(f"After SortColor function : {nums}")