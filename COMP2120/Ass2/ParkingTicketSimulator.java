public class ParkingTicketSimulator {
    public static void main(String[] args){
        ParkedCar car = new ParkedCar("BMW",1997,"White","12JHG4",125);
        ParkingMeter meter = new ParkingMeter(120);
        PoliceOfficer cop = new PoliceOfficer("Paul Blart", 1243);

        System.out.println(car.toString());// prints car info
        System.out.println(cop.toString());// prints cop info

        cop.examine(car, meter);  // checks if car is over parking limit, if so then create parking ticket obj if not print out not exceeded limit
    }
}
