
/*
 * ==========================================
 * JAVA: PASS-BY-VALUE & OBJECT REFERENCES
 * ==========================================
 *
 * 1. JAVA IS ALWAYS PASS-BY-VALUE
 *
 *    Java always passes a COPY of the argument's value
 *    to a method. It never supports pass-by-reference.
 *
 *    - Primitive variables: A copy of the actual value is passed.
 *    - Object variables: A copy of the object reference is passed.
 *
 * 2. WHAT HAPPENS WHEN AN OBJECT IS PASSED?
 *
 *    Suppose:
 *        Node head = new Node(10);
 *        modify(head);
 *
 *    Java creates a local parameter 'head' containing
 *    a COPY of the original reference.
 *
 *    Both references initially point to the SAME object.
 *
 * 3. MODIFYING THE ORIGINAL OBJECT
 *
 *    public static void modify(Node head) {
 *        head.value = -1;
 *    }
 *
 *    - head is a LOCAL reference variable.
 *    - However, it points to the SAME Node object as
 *      the original head in the caller.
 *    - Modifying the object's fields affects the original
 *      object, so the caller can observe the change.
 *
 * 4. REASSIGNING THE LOCAL REFERENCE
 *
 *    public static void modify(Node head) {
 *        head = new Node(-1);
 *    }
 *
 *    - A NEW Node object is created.
 *    - Only the LOCAL reference variable is reassigned.
 *    - The original head still points to the OLD Node.
 *    - Therefore, the caller's reference is NOT changed.
 *
 * 5. STRING VS STRINGBUILDER
 *
 *    STRING:
 *
 *        public static void modify(String s) {
 *            s += " Extra";
 *        }
 *
 *    - String is IMMUTABLE.
 *    - s += " Extra" creates a NEW String.
 *    - Only the local reference is reassigned.
 *    - Original String remains unchanged.
 *
 *    STRINGBUILDER:
 *
 *        public static void modify(StringBuilder s) {
 *            s.append(" Extra");
 *        }
 *
 *    - StringBuilder is MUTABLE.
 *    - append() modifies the EXISTING object.
 *    - Both references point to the same object.
 *    - Therefore, the caller observes the modification.
 *
 * 6. IMPORTANT: REFERENCE COMPARISON
 *
 *    ==       : Compares object references (identity).
 *    .equals(): Compares object contents (for String).
 *
 *    Example:
 *        String a = new String("Hello");
 *        String b = new String("Hello");
 *
 *        a == b       // false
 *        a.equals(b) // true
 *
 * ==========================================
 * GOLDEN RULE TO REMEMBER
 * ==========================================
 *
 * Java passes a COPY of the reference, NOT the object
 * itself and NOT the caller's reference variable.
 *
 * Modifying a shared mutable object:
 *     Changes are visible to the caller.
 *
 * Reassigning a local reference:
 *     Does NOT change the caller's reference.
 *
 * String is immutable, whereas StringBuilder is mutable.
 *
 * ==========================================
 */

public class objectReferenceConcept {
    public static void modify(String s){
          s+=" Extra";
    }
    public static void modify(StringBuilder s){
        s.append(" Extra");
    }
    public static void main(String[] args) {
        String s1 = new String("Hello");
        StringBuilder s2 = new StringBuilder("Hello");
        modify(s1);
        modify(s2);
        System.out.println("After calling modify function for String s1, final s is : "+s1);
        System.out.println("After calling modify function for StringBuilder s2, final s is : "+s2);
    }
}
