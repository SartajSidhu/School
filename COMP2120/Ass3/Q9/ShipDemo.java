public class ShipDemo {
    public static void main(String[] args) {
        Ship[] boats = new Ship[3];
        Ship lol = new Ship("Lollipop", "1960");
        CruiseShip dis = new CruiseShip("Disney Magic", "2000", 2400);
        CargoShip bp = new CargoShip("Black Pearl", "1980", 50000);

        boats[0] = lol;
        boats[1] = dis;
        boats[2] = bp;

        for(int i = 0; i<boats.length; i++){
            System.out.println(boats[i]);
        }
    }
}
