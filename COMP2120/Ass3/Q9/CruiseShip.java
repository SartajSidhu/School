public class CruiseShip extends Ship {
    private int passengers;

    public CruiseShip(String n, String y, int p){
        super(n, y);
        passengers = p;
    }

    public int getPassengers() {
        return this.passengers;
    }

    public void setPassengers(int passengers) {
        this.passengers = passengers;
    }

    @Override 
    public String toString(){
        return "Name: " + getName() + "\n"
        + "Maximum passengers: " + getPassengers()+ "\n" 
        +"----------------------------";    
    }

}
