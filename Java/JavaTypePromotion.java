public class JavaTypePromotion {
    public static void main(String[] args) {
        byte byteval = Byte.MAX_VALUE;
        short shortval = Short.MAX_VALUE;
        int intval = Integer.MAX_VALUE;
        long total1 = 50000000L + 10 *(byteval+shortval+intval); // Silent Wrapping because of overflow
        long total2 = 50000000L + 10L*(byteval+shortval+intval); // Even it is Also Not preventing Wrapping
        long total3 = 50000000L + 10*((long)byteval+shortval+intval);
        System.out.println(total1);
        System.out.println(total2);
        System.out.println(total3);
    }
}
