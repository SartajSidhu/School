import java.util.ArrayList;
import java.util.Scanner;
import java.util.Comparator;
import java.util.Collections;

public class FriendsList{
    private ArrayList<Person> friends;
    
    public FriendsList(ArrayList<Person> f){
        friends = f;
    }

    public void addfriend(Person p){ // add person to arraylist
        friends.add(p);
    }

    public int getSize(){ // how many friends their are 
        return friends.size();
    }

    public void deletefriend(Person p){ //find specific person and delete them from the list 
        for(int i=0;i<getSize();i++){
            if(p.equals(friends.get(i))==true){
                friends.remove(i);
            }
        }
    }

    public void modifyfriend(Person p){ //find specific friend and ask the user what they would like to change about the friend
        Scanner keyboard = new Scanner (System.in);
        for(int i=0;i<getSize();i++){
            if(p.equals(friends.get(i))==true){
                System.out.println("Please choose a number for what you would like to modify");
                System.out.println("(1) First name.");
                System.out.println("(2) Last name.");
                System.out.println("(3) Phone number.");
                System.out.println("(4) Birth date.");
                System.out.println("(5) Birth month.");
                System.out.printf("What would you like to modify about %s %s? :",p.getFirstname(),p.getLastname());
                int input = keyboard.nextInt();
                keyboard.nextLine();
                if(input==1){
                    System.out.print("Please enter their first name: ");
                    String newFirst = keyboard.nextLine();
                    p.setFirstname(newFirst);
                    System.out.printf("Their new info is %s\n",p.toString());
                }
                else if(input==2){
                    System.out.print("Please enter their last name: ");
                    String newLast = keyboard.nextLine();
                    p.setLastname(newLast);
                    System.out.printf("Their new info is %s\n",p.toString());
                }
                else if(input==3){
                    System.out.print("Please enter their phone number (no spaces): ");
                    String newNum = keyboard.nextLine();
                    p.setPhonenumber(newNum);
                    System.out.printf("Their new info is %s\n",p.toString());
                }
                else if(input==4){
                    System.out.print("Please enter their birth date : ");
                    int newBday = keyboard.nextInt();
                    p.setBirthdate(newBday);
                    System.out.printf("Their new info is %s\n",p.toString());
                }
                else if(input==5){
                    System.out.print("Please enter their birth month : ");
                    int newBm = keyboard.nextInt();
                    p.setBirthdate(newBm);
                    System.out.printf("Their new info is %s\n",p.toString());
                }
            }
        }
    }

    public ArrayList<Person> namesort(){ //sort friends alphabetically 
        Collections.sort(friends, new Comparator<Person>() {
            @Override         
            public int compare(Person p1, Person p2) {             
              return  p1.getLastname().compareTo(p2.getLastname());         
            } 
        });
        return friends;
    }
    
    public ArrayList<Person> sameMonth(int m) { //return an arraylist of friends with a bday in the same month acsending order
        ArrayList<Person> sameM = new ArrayList<Person>();
        for(int i=0;i<getSize();i++){
            if(friends.get(i).getBirthmonth() == m) {
                sameM.add(friends.get(i));
            }
        }

        Collections.sort(sameM, new Comparator<Person>() {
            @Override
            public int compare(Person p1, Person p2) {
                return p1.getBirthdate() - p2.getBirthdate();
            }
        });
        return sameM;
    }
    
    public ArrayList<Person> sameDate(int d, int m) { //return an arraylist of freinds with the same date in their birthday in alphabetical order
        ArrayList<Person> sameD = new ArrayList<>();
        for(int i=0;i<getSize();i++){
            if(friends.get(i).getBirthmonth() == m) {
                if(friends.get(i).getBirthdate()==d){
                    sameD.add(friends.get(i));
                }
            }
        }

        Collections.sort(sameD, new Comparator<Person>() {
            @Override         
            public int compare(Person p1, Person p2) {             
                return  p1.getLastname().compareTo(p2.getLastname());         
            } 
        });
        return sameD;
    }
     
    public String getCell(String fname, String lname){ // gets the phone number with only having the persons name
        Boolean flag = false;
        int saved =0;
        for(int i=0;i<getSize();i++){
            if(friends.get(i).getFirstname().equalsIgnoreCase(fname)==true && friends.get(i).getLastname().equalsIgnoreCase(lname)==true){
                flag = true;
                saved = i;
                //return friends.get(i).getPhonenumber();
            }
        }
        if(flag==true){
            return friends.get(saved).getPhonenumber();
        }
        else{
            return "No person with that first and last name"; //return if person isnt within friends 
        }
        
    }

    public void removeAll(String n){ //method to remove all persons with a specific first name 
        for(int i=0;i<getSize();i++){
            if(friends.get(i).getFirstname().equalsIgnoreCase(n)==true){
                friends.remove(i);
            }
        }
    }
}
