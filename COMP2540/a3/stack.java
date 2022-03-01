// Sartaj Sidhu 110039107
public class stack{
    private final int n = 1000;
    private int t;
    private String a[];

    public stack(){
        t = -1;
        a = new String[n];
    }
    public void push(String s){
        if(isFull()==false){
            t++;
            a[t] = s;
        }
        else{
            System.out.println("Stack is Full.");
        }
    }

    public String pop(){
        if(isEmpty()==true){
            System.out.println("Stack is empty");
            return "empty";
        }
        else{
            t--;
            return a[t+1];
        }
    }

    public String top(){
        if(isEmpty()==true){
            System.out.println("Stack is empty");
            return "no top";
        }
        else{
            return a[t];
        }
    }

    public int size(){
        return t+1;
    }

    public boolean isFull(){
        if(t==n){
            return true;
        }
        return false;
    }
    public boolean isEmpty(){
        if(t==-1){
            return true;
        }
        return false;
    }
    public String bracketSolve(String s){
        t=-1; //set stack to empty to start 
        char[] arr = s.toCharArray();
        int pos = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i]=='('){
                push("(");
                pos++;
            }
            if(isEmpty()==true && arr[i]==')'){
                return ("Mismatched bracket at position "+i);
            }
            if(isEmpty()==false && arr[i]==')'){
                pop();
                pos--;
            }
        }
        if(isEmpty()==true){
            return "All brackets matched";
        }
        else{
            return ("Mismatched bracket at position "+(pos));
        }
    }
}