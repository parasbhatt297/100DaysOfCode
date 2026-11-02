import  java.util.*;
public class tcsInterestRate {
   public static void main(String[] args) {
    Account a = new Account();
    Scanner sc  = new Scanner(System.in);
    a.id = sc.nextInt();
    a.balance = sc.nextDouble();
    a.interest  = sc.nextDouble();
    int years = sc.nextInt();
    double ans = calculateInterest(a , years);
    System.out.printf("%.3f" , ans);
    sc.close();
   }
   public static double calculateInterest(Account a , int years){
    double finalInterest = a.interest + (double)(a.interest * years)/100.0 ;
    return  a.balance * finalInterest / 100.0;                  
   }
}
class Account{
    int id ;
    double balance;
    double interest;
}