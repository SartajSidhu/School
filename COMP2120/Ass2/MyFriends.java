import java.util.ArrayList;
public class MyFriends {
    public static void main(String[] args){
        Person sartaj = new Person("Sartaj", "Sidhu", "5191113333", 15, 12);
        Person simrat = new Person("Simrat", "Poonia", "5192221313", 13, 10);
        Person shane1 = new Person("Shane", "Jupe", "2223322332", 13, 10);
        Person shane2 = new Person("Shane", "Jake", "2191231234", 13, 9);
        Person arsh = new Person("Arshdeep", "Sidhu", "1253001000", 13, 3);
        Person rapper = new Person("Drake", "Graham", "1234512341", 12, 10);
        Person weird = new Person("Scooby", "Doo", "9000100200", 12, 4);

        ArrayList<Person> gang = new ArrayList<Person>();

        FriendsList frenz = new FriendsList(gang);

        frenz.addfriend(sartaj); //adding friends
        frenz.addfriend(simrat);
        frenz.addfriend(shane1);
        frenz.addfriend(shane2);
        frenz.addfriend(arsh);
        frenz.addfriend(rapper);
        frenz.addfriend(weird);

        frenz.deletefriend(weird); //deleting friend

        frenz.modifyfriend(simrat); //changing friend info
        frenz.modifyfriend(sartaj);

        System.out.println("Friends list in alphabetical order by lastname: ");
        System.out.println(frenz.namesort());// print out list in alphabetical order
        
        System.out.println("All friends with a birthday in October: ");
        System.out.println(frenz.sameMonth(10)); // print out list with birthday in the month 10 (october)

        System.out.println("All friends with a birthday on october 13th: ");
        System.out.println(frenz.sameDate(13,10)); // print out list with birthday with same date 13 and in october

        System.out.printf("The number of Arsh is: %s\n",frenz.getCell("ArshDEEP", "SiDhU")); //print out number of specific person only given first name and last name


        FriendsList noshane = frenz; // make a copy of the frenz list
        noshane.removeAll("Shane"); //remove all persons with the first name shane
        System.out.println("Friends with no shanes: ");
        System.out.println(noshane.namesort());

    }
    
}
