public class PoliceOfficer {
    private String name;
    private int badge;

    public String getName() {
        return name;
    }

    public int getBadge() {
        return badge;
    }

    public PoliceOfficer(String n, int b){
        name = n;
        badge = b;
    }

    public void examine(ParkedCar car, ParkingMeter meter){
        if(car.getMinsParked()>meter.getTimePurchased()){ //if over time purchased create parking ticket
            ParkingTicket ticket = new ParkingTicket(car,meter);
            System.out.println(ticket.toString()); //print out parking ticket info
        }
        else{
            System.out.printf("The %s %s hasn't exceeded the parking time limit.\n",car.getModel(),car.getMake());
        }
    }

    @Override
    public String toString() {
        return "Officer Data:\n"+
            "Name: " + getName() + "\n" +
            "Badge: " + getBadge() + "\n";
    }
}

    
