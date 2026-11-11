import java.util.*;
public class TreeTraversal {
        public Node root;
    
        public static class Node {
            public int value;
            public Node left;
            public Node right;
    
            private Node(int value) {
                this.value = value;
            }
        }
    
        public Node getRoot() {
            return root;
        }
    
        public boolean insert(int value) {
            Node newNode = new Node(value);
            if (root == null) {
                root = newNode;
                return true;
            }
            Node temp = root;
            while (true) {
                if (newNode.value == temp.value) return false;
                if (newNode.value < temp.value) {
                    if (temp.left == null) {
                        temp.left = newNode;
                        return true;
                    }
                    temp = temp.left;
                } else {
                    if (temp.right == null) {
                        temp.right = newNode;
                        return true;
                    }
                    temp = temp.right;
                }
            }
        }
    
        public boolean contains(int value) {
            if (root == null) return false;
            Node temp = root;
            while (temp != null) {
                if (value < temp.value) {
                    temp = temp.left;
                } else if (value > temp.value) {
                    temp = temp.right;
                } else {
                    return true;
                }
            }
            return false;
        }
    
     public ArrayList<Integer> BFS(){
         ArrayList<Integer> res = new ArrayList<>();
         Node head = getRoot();
         if(head==null)return res;
         Queue<Node>q = new ArrayDeque<>();
         q.offer(head);
         while(!q.isEmpty()){
             Node temp = q.peek();
             q.poll();
             res.add(temp.value);
             if(temp.left!=null)q.offer(temp.left);
             if(temp.right!=null)q.offer(temp.right);
         }
         return res;
     }
    public ArrayList<Integer>bfsTraversal(){
        ArrayList<Integer> res = new ArrayList<>();
        Queue<Node>q = new ArrayDeque<>();
        q.offer(root);
        while (!q.isEmpty()) {
            Node newnode = q.poll();
            res.add(newnode.value);
            if(newnode.left!=null)q.offer(newnode.left);
            if(newnode.right!=null)q.offer(newnode.right);
        }
        return res;
    }
    //Note: This ArrayList is taken just for example.. it will return wrong
    //answer if multiple call of traversal technique happen
    ArrayList<Integer>temp = new ArrayList<>();
    public ArrayList<Integer>inOrderTraversal(Node root){
           if(root==null)return null;
           inOrderTraversal(root.left);
           temp.add(root.value);
           inOrderTraversal(root.right);
          return temp;
    }
     public ArrayList<Integer>preOrderTraversal(Node root){
           if(root==null)return null;
           temp.add(root.value);
           preOrderTraversal(root.left);
           preOrderTraversal(root.right);
          return temp;
    }
     public ArrayList<Integer>postOrderTraversal(Node root){
           if(root==null)return null;
           postOrderTraversal(root.left);
           postOrderTraversal(root.right);
           temp.add(root.value);
          return temp;
    }
    public static void main(String[] args) {
        
    }
    }
