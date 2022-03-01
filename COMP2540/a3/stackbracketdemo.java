// Sartaj Sidhu 110039107
import java.util.Scanner;
public class stackbracketdemo {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        stack stk = new stack();
        //System.out.print("Enter a string: ");  
        //String inp= s.nextLine();
        //System.out.println(stk.bracketSolve(inp));
        

        System.out.println(stk.bracketSolve("()"));
        System.out.println(stk.bracketSolve("()()()()()()()"));
        System.out.println(stk.bracketSolve("((((((((())))))))"));
        System.out.println(stk.bracketSolve("(()((()()())(())))"));
        System.out.println(stk.bracketSolve(")("));
        System.out.println(stk.bracketSolve("((()()())))"));
        System.out.println(stk.bracketSolve("(((((((()))))))"));
        System.out.println(stk.bracketSolve("()()())()()()"));

        
        s.close();
    }
}
