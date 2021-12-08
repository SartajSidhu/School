import java.util.ArrayList;

public class MyCompany {
    public static void main(String[] args) {
        Employee Josh = new Employee("Josh", "Lew", "5199962204", 12, 12, 2002, 10000, 10, 10);
        Employee Jake = new Employee("Jake", "Randy", "2265552204", 11, 12, 2003, 10000, 10, 0);
        Employee James = new Employee("James", "Rocker", "5191112204", 10, 12, 2004, 10000, 10, 5);
        Employee Joy = new Employee("Joy", "Lewis", "2260002204", 9, 12, 2005, 10000, 10, 2);
        
        ArrayList<Employee> rajWorkers = new ArrayList<Employee>();
        rajWorkers.add(Josh);
        rajWorkers.add(Jake);

        ArrayList<Employee> simWorkers = new ArrayList<Employee>();
        simWorkers.add(James);
        simWorkers.add(Joy);

        Manager Raj = new Manager("Raj", "Dawg", "1112223333", 7, 10, 2001, 100000, 20, 10, 20000, rajWorkers);
        Manager Sim = new Manager("Sim", "Sidhu", "1800180012", 13, 10, 2001, 100000, 20, 20, 40000, simWorkers);

        ArrayList<Object> allWorkers = new ArrayList<Object>();
        allWorkers.add(Josh);
        allWorkers.add(Jake);
        allWorkers.add(James);
        allWorkers.add(Joy);
        allWorkers.add(Raj);
        allWorkers.add(Sim);
        
        Company SidhuCorp = new Company("SidhuCorp", 2001, allWorkers);
        
        System.out.println(SidhuCorp.getCompName() + " was founded in " + SidhuCorp.getStartYr());
        System.out.println(SidhuCorp.getWorkers());
        System.out.println(Sim.getEmployees());

    }
}

