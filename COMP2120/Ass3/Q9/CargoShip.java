public class CargoShip extends Ship {
    private int cargo;

    public CargoShip(String n, String y, int c){
        super(n, y);
        cargo = c;
    }

    public int getCargo() {
        return this.cargo;
    }

    public void setCargo(int cargo) {
        this.cargo = cargo;
    }

    @Override
    public String toString(){
        return "Name: " + getName() + "\n"
        + "Cargo Capacity: " + getCargo()+ " tons" + "\n" 
        +"----------------------------";  
    }


}
