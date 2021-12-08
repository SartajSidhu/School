public class ShiftSupervisorDemo {
    public static void main(String[] args) {
        Employee john = new Employee("John Smith", "123-A", "11-15-2005");
        ShiftSupervisor johnn = new ShiftSupervisor(john, 48000.00, 6500.00);
        ShiftSupervisor joan = new ShiftSupervisor("Joan Jones", "222-L", "12-12-2005", 55000.00, 8000.00);
        System.out.println("Here's the first shift supervisor.");
        System.out.println(johnn);
        System.out.println("\nHere's the second shift supervisor.");
        System.out.println(joan);
        

    }
    
}
