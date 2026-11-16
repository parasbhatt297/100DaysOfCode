import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Leetcode1630 {
     public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean>res = new ArrayList<>();
        for(int i = 0 ; i<l.length ; i++){
            if(r[i]-l[i]+1 <2)res.add(false);
            else{
            int []temp = Arrays.copyOfRange(nums , l[i] , r[i]+1);
            Arrays.sort(temp);
            for(int j = 1 ; j<temp.length ; j++){
                if(temp[j]-temp[j-1] !=temp[1]-temp[0]){
                    res.add(false);
                    break;
                }
            }
            if(res.size()==i)res.add(true);
            }
        }
        return res;
    }
    public static void main(String[] args) {
        Leetcode1630 obj = new Leetcode1630();
        List<Boolean>res = obj.checkArithmeticSubarrays(new int[] {4,6,5,9,3,7},new int[]{0,0,2},new int[]{2,3,5});
        System.out.println(res);
        System.out.println("Expected : [true,false,true]");
    }
}
