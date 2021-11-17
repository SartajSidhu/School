import java.io.*;
public class Solver {
    public static void main(String[] args) throws IOException {
        FileReader fn = new FileReader("secret.txt");
        BufferedReader br = new BufferedReader(fn);
        String sentence = br.readLine();
        StringBuilder secret = new StringBuilder();
        //if(br.readLine()!=null){
            //sentence = br.readLine();
        //}
        String parts[] = sentence.split(" ");
        
        for (int i =0; i<parts.length;i+=5){
            secret.append(parts[i].charAt(0));
        }
        System.out.println("The secret code is: "+secret);
        br.close();
        fn.close();
        
    }
    
}
