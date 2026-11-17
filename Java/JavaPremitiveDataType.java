public class JavaPremitiveDataType {
    public static void main(String[] args) {
        // JavaPremitiveDataType a = new JavaPremitiveDataType();
        byte myMin = Byte.MIN_VALUE;
        // byte a = myMin+5 ;                // Compilation Error
        byte a  = (byte) (myMin+5);
        System.out.println(a);

        byte myMax = Byte.MAX_VALUE;
        a = (byte)(myMax+5);  // No Error because Java wrap when data overflow and value will be in negative
        System.out.println(a);

        // long lvalue = 10000000000 ;       // Compilation Error
           long lvalue = 10000000000l;
           long lvalue2= 10000000000L;
        // Both Capital and small L are allowed but capital L is recommended because
        // l (small L) looks like 1 and hence it might create confusion in code readability.
        System.out.println(lvalue);
        System.out.println(lvalue2);

        // long val = 10.5 + 12L             //Compilation Error
        long val = (long)(10.5+12L);
        System.out.println(val);
    }
}
