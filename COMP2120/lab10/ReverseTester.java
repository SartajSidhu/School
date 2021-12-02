import java.util.LinkedList;
/**
 A test program to reverse the entries in a linked list.
*/
public class ReverseTester
{
 public static void main(String[] args)
 {
 LinkedList<String> employeeNames = new LinkedList<>();
 employeeNames.addLast("Dick");
 employeeNames.addLast("Harry");
 employeeNames.addLast("Romeo");
 employeeNames.addLast("Tom");

 

 System.out.println(safeReverse(employeeNames));
 ListUtil.reverse(employeeNames);
 System.out.println(employeeNames);
 
 System.out.println("Expected: [Tom, Romeo, Harry, Dick]");
 }

 // safe reverse method can reverse the linked list without modifiying the original
 private static LinkedList<String> safeReverse(LinkedList<String> strings){
    LinkedList<String> clone = new LinkedList<String>();
    for(int i = 0; i<strings.size(); i++){
        clone.addFirst(strings.get(i));
    }
    return clone;
 }
}