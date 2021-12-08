public class WorkerDemo {
    public static void main(String[] args) {
        ProductionWorker john = new ProductionWorker("John Smith", "123-A", "11-15-2005", 1, 16.50);
        ProductionWorker joan = new ProductionWorker("Joan Jones", "222-L", "12-12-2005", 2, 18.50);
        

        System.out.println("Here's the first production worker.");
        System.out.println(john);
        System.out.println("Here's the second production worker.");
        System.out.println(joan);
        
        ProductionWorker sartaj = new ProductionWorker("Sartaj Sidhu", "12A-A", "12-15-2002", 1, 27.50);
        System.out.println("Here's the third production worker.");
        System.out.println(sartaj);
    }
}
