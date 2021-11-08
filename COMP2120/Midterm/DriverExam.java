public class DriverExam {
    private String [] ans = {"B","D","A","A","C","A","B","A","C","D"};
    private String [] studentA = {};
    private int [] missed = {};

    public DriverExam(String[] ans){
        studentA = ans;
    }
    public void totalC(){
        int total = 0;
        for(int x = 0; x < ans.length; x++){
            if(ans[x] == studentA[x]){
                total += 1;
            }
        }
        return total; 
    }
    public void totalIn(){
        int total = 0;
        for(int x = 0; x < ans.length; x++){
            if(ans[x] != studentA[x]){
                total += 1;
                qMiss(x);
            }
        }
        return total;
    }
    public int qMiss(int x){
        return missed[x]; 
    }
    public boolean passed(){
        if(totalCorrect >= 7){
            return true;
        }else{
            return false;
        }
    }
    public static boolean validInput (String ans){
        ans = ans.toUpperCase();
        if(ans.equals("A") || ans.equals("B") || ans.equals("C") || ans.equals("D")){
            return true;
        }else{
            System.out.println("ERROR: Valid answers are A, B, C, or D.");
            return false;
        } 
    }
}