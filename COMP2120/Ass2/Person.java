public class Person {
    private String firstname;
    private String lastname;
    private String phonenumber;
    private int birthdate;
    private int birthmonth;

    public Person(String f, String l, String num, int b, int m){
        firstname = f;
        lastname = l;
        phonenumber = num;
        birthdate = b;
        birthmonth = m;
    }

    public String getFirstname() {
        return firstname;
    }

    public void setFirstname(String f) {
        firstname = f;
    }

    public String getLastname() {
        return lastname;
    }

    public void setLastname(String l) {
        lastname = l;
    }

    public String getPhonenumber() {
        return phonenumber;
    }

    public void setPhonenumber(String num) {
        phonenumber = num;
    }

    public int getBirthdate() {
        return birthdate;
    }

    public void setBirthdate(int b) {
        birthdate = b;
    }

    public int getBirthmonth() {
        return birthmonth;
    }

    public void setBirthmonth(int m) {
        birthmonth = m;
    }
    

    @Override
    public String toString() {
        return "\n{" +
            " firstname: '" + getFirstname() + "'" +
            ", lastname: '" + getLastname() + "'" +
            ", phonenumber: '" + getPhonenumber() + "'" +
            ", birthdate: '" + getBirthdate() + "'" +
            ", birthmonth: '" + getBirthmonth() + "'" +
            "}\n";
    }


    
}
