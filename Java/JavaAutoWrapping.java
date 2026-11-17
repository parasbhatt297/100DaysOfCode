public class JavaAutoWrapping {
    public static void main(String[] args) {
        
        int val = Integer.MAX_VALUE + 6 ;
        System.out.println(val); 
        // printed wrapped -ve value because for wrapping it takes 2's complement!


        long longval = Long.MAX_VALUE + 8 ;
        System.out.println(longval);
        // Again Wrapped to -ve Value

        // At first Glance it might Look Cool But C++ is better here 
        // because c++ gives undifined error but java silently wraps to -ve value

        //Solution
        long wrongContainer = Integer.MAX_VALUE + 5 + 1L ; // Got error Because Left to right read so 1L in left needed
        long rightContainer = 1L + Integer.MAX_VALUE + 5 ; 
        System.out.println(wrongContainer); // gives -ve value because conversion happens in last
        System.out.println(rightContainer);
    }
}
