public class TeamLeaderDemo {
    public static void main(String[] args) {
        TeamLeader john = new TeamLeader("John Smith", "123-A", "11-15-2005", 1, 16.50,500.00,5.0,2.5);
        TeamLeader joan = new TeamLeader("Joan Jones", "222-L", "12-12-2005", 2, 18.50,600.00,7.0,3.5);
        System.out.println("Here's the first team leader.");
        System.out.println(john);
        System.out.println("\nHere's the second team leader.");
        System.out.println(joan);
    }
}
