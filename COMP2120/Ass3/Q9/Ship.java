public class Ship {
    private String name;
    private String year;

    public Ship(String n, String y){
        name = n; 
        year = y;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getYear() {
        return this.year;
    }

    public void setYear(String year) {
        this.year = year;
    }

    @Override
    public String toString(){
        return "Name: " + getName() + "\n"
        + "Year built: " + getYear()+ "\n" 
        +"----------------------------";
    }

}
