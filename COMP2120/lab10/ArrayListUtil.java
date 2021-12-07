import java.util.ArrayList;

public class ArrayListUtil {

    public static <T> void reverse(ArrayList<T> list){
        T temp;
        int x;
        for(int i =0; i< list.size()-1;i++){
            temp = list.get(i);
            x = list.size()-1;
            list.set(i, list.get(x));
            list.set(x,temp);
        }
    }

    public static <T> ArrayList<T> reverseNoModify(ArrayList<T> list){
        ArrayList<T> rList = new ArrayList<T>();
        
        for(int i =list.size()-1; i>=0;i--){
            rList.add(list.get(i));
        }
        return rList;
    }
}