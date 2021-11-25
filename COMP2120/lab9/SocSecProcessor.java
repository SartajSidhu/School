import java.util.Scanner;


public class SocSecProcessor {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        String name;
        String ssn;
        String choice = "y";
        while(choice.charAt(0)=='y'){
            System.out.print("Please enter your name: ");
            name = kb.nextLine();
            System.out.print("Please enter your social secuirty number: ");
            ssn = kb.nextLine();
            try {
                
                if(isValid(ssn)==true){
                    System.out.println(name +" "+ ssn + " is valid");
                }
            } catch (SocSecException e) {
                System.out.println(e);    
            }
            System.out.print("Would you like to continue (y/n): ");
            choice=kb.nextLine();
        }
    }
    public static boolean isValid(String ssn) throws SocSecException{
        if(ssn.length()!=11){
            throw new SocSecException(", wrong number of characters");
        }
        if(ssn.charAt(3)!='-' || ssn.charAt(6)!='-'){
            throw new SocSecException(", dashes at wrong positions");
        }
        for(int i =0; i<ssn.length();i++){
            if( i == 0 || i==1 || i == 2 || i == 4 || i==5 || i==7 || i==8 || i==9 || i==10){
                if(Character.isDigit(ssn.charAt(i))==false){
                    throw new SocSecException(", contains a character that is not a digit");
                }
            }
        }
        return true;
    }
    
}
