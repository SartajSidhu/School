public class ParkingTicket {
    private int fine;
    private int illegal;
    private ParkedCar car;
    public ParkingTicket(ParkedCar c, ParkingMeter meter){
        car = c; // hold car obj to use getter methods
        illegal = car.getMinsParked()-meter.getTimePurchased(); // calculate the time iellgaly parked
        fine = 25 + (10*illegal/60); //fine starts at 25 then adds 10 dollars for every hour over so use intger division wtih illegal time/ 60 (1 hour)
    }

    public int getFine() {
        return fine;
    }
    public int getIllegal() {
        return illegal;
    }


    @Override
    public String toString() {
        return 
            "make: " + car.getMake() + "\n" +
            "model: " + car.getModel() + "\n" +
		    "colour: " + car.getColour() + "\n" +
		    "licenseNum: " + car.getLicenseNum() + "\n" +
            "\nfine: $" + getFine() + "\n" +
            "minutes ilegally parked: " + getIllegal() + "\n";
    }    
}
