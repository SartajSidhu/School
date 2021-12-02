import java.util.LinkedList;
/**
 This class supplies a utility method to reverse the entries in a linked list.
*/
public class ListUtil
{
 /**
 Reverses the elements in a linked list
 @param strings the linked list to reverse
 */
 public static void reverse(LinkedList<String> strings)
 {
    for(int i = 0; i<strings.size()-1; i++){
        strings.addLast(strings.removeFirst());
    }
 // Complete this static method based on its JavaDoc comment.
 }
}