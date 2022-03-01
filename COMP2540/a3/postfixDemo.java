// Sartaj Sidhu 110039107
import java.util.Scanner;
public class postfixDemo {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        postfixStack stk = new postfixStack();
        System.out.println("Welcome to the stack calculator, please enter each line and to finish with =");
        char c = 'c';
        System.out.println("Please enter an integer or operand:");
        c = s.next().charAt(0);
        int val1,val2;
        boolean flag;
        flag = true;
        while(flag == true){
            if(Character.isDigit(c)==true){
                stk.push(Character.getNumericValue(c));
            }
            if(c=='='){
                if(stk.size()>1){
                    System.out.println("Too many operands\nEnter another operator:");
                }
                else if(stk.size()==1){
                    System.out.print(stk.pop());
                    flag = false;
                    break;
                }    
            }
            else if(c=='+'){
                if(stk.size()>1){
                    val1 = stk.pop();
                    val2 = stk.pop();
                    stk.push(val1+val2);
                }
                else if(stk.size()<=1){
                    System.out.println("Too little operands.");
                }
            }
            else if(c=='-'){
                if(stk.size()>1){
                    val1 = stk.pop();
                    val2 = stk.pop();
                    stk.push(val2-val1); //do val 2 first since it was entered in the stack first.
                }
                else if(stk.size()<=1){
                    System.out.println("Too little operands.");
                }
            }
            else if(c=='*'){
                if(stk.size()>1){
                    val1 = stk.pop();
                    val2 = stk.pop();
                    stk.push(val1*val2);
                }
                else if(stk.size()<=1){
                    System.out.println("Too little operands.");
                }
            }
            c = s.next().charAt(0);
            
        }
        s.close();    
    }
}
