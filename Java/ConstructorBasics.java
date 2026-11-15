/**
 * ConstructorBasics
 */
public class ConstructorBasics {
    private int size ;
    public ConstructorBasics(int val){
        size = val;
    }
    public static void main(String[] args) {
        ConstructorBasics obj1 = new ConstructorBasics(5);
        System.err.println(obj1.size);
        /*  ConstructorBasics obj2 = new ConstructorBasics();
                                                          ^^
                                                          ||
                  Line written above will give error 
    Reason* => Usually java creates Default Constructor Automatically 
    but if a Parameterized constructor is created by user then java
    doesn't create default constructor itself .. user needs to create
    default constructor as well.
    
    

    Solution* => Whenever you create a Parameterized Constructor always create a default Constructor!
    */
    }
}