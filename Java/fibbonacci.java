public class fibbonacci {
    public static int countUsingnormalFib = 0;
    public static int countUsingdpFib = 0;
   
    public static int normalFib(int n){
        countUsingnormalFib++;
        if(n==0 || n==1)return n;
        return normalFib(n-1) + normalFib(n-2);
    }
    public  static int dpFib(int n){
          int [] dp = new int[n+1];
          dp[0] = 0 ; dp[1] = 1 ;
          for(int i = 2 ; i<n+1 ; i++){
            dp[i] = dp[i-1]+dp[i-2];
            countUsingdpFib++;
          }
          return dp[n];
    }
    public static void main(String[] args) {
        int ans = normalFib(40);
        int ans2 = dpFib(40);
        System.out.println("Both answers are "+ans+" and "+ans2);
        System.out.println("Count for Normalfib function which use recursion :" + countUsingnormalFib );
        System.out.println("Count for dpFib function :" + countUsingdpFib );
    }
}
