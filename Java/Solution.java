import java.util.*;
class Solution {
   List<List<Integer>>res = new ArrayList<>();
    public void solve(int[]nums , int idx ,List<Integer>list, int target){
            if(target == 0)
            res.add(new ArrayList<>(list));  

            for(int i = idx ; i<nums.length ; i++){
                if(nums[i]>target)break;
            list.add(nums[i]);
            solve(nums , i , list , target-nums[i]);
            list.remove(list.size()-1);
        }
        
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer>list = new ArrayList<>();
        Arrays.sort(candidates);
        solve(candidates , 0,list, target);
        return res;
    }
    public static  void main(String[] args) {
        Solution obj = new Solution();
        System.out.println(obj.combinationSum(new int[]{2,3,6,7} , 7));
    }
}