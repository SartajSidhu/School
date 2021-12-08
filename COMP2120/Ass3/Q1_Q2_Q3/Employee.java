public class Employee {
    private String name;
    private String num;
    private String date;

    public Employee(){
        name = "";
        num = "";
        date = "";
    }

    public Employee(String name, String num, String d){
        this.name = name;
        if(Character.isDigit(num.charAt(0))==true && Character.isDigit(num.charAt(1))==true && Character.isDigit(num.charAt(2))==true && num.charAt(3)=='-' && Character.isLetter(num.charAt(4))==true){
            this.num = num;
        }
        else{
            throw new IllegalArgumentException("Invalid Employee Number");
        }
        date = d;
    }


    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getNum() {
        return this.num;
    }

    public void setNum(String num) {
        if(Character.isDigit(num.charAt(0))==true && Character.isDigit(num.charAt(1))==true && Character.isDigit(num.charAt(2))==true && num.charAt(3)=='-' && Character.isLetter(num.charAt(4))==true){
            this.num = num;
        }
        else{
            throw new IllegalArgumentException("Invalid Employee Number");
        }
        
    }

    public String getDate() {
        return this.date;
    }

    public void setDate(String date) {
        this.date = date;
    }

}
