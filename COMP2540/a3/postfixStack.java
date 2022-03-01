// Sartaj Sidhu 110039107
public class postfixStack{
    private final int n = 1000;
    private int t;
    private int a[];

    public postfixStack(){
        t = -1;
        a = new int[n];
    }
    public void push(int x){
        if(isFull()==false){
            t++;
            a[t] = x;
        }
        else{
            System.out.println("Stack is Full.");
        }
    }

    public int pop(){
        if(isEmpty()==true){
            System.out.println("Stack is empty");
            return 0;
        }
        else{
            t--;
            return a[t+1];
        }
    }

    public int top(){
        if(isEmpty()==true){
            System.out.println("Stack is empty");
            return 0;
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
}