import java.util.*;
public class Polynomial implements Comparable<Polynomial>{
    private Map<Integer, Integer> pol;
    private int degree;

    //constructor
    public Polynomial (){
        pol  =new TreeMap<>(Collections.reverseOrder());
        degree = -1;
    }

    //constructor with point
    public Polynomial(int x, int y){
        try{
            if(x<0){
                throw new IllegalArgumentException("Power of a term can't be negative. The term ignored");
            }
            pol = new TreeMap<>(Collections.reverseOrder());
            pol.put(x,y);
            degree = x;
        }
        catch(IllegalArgumentException e){
            System.out.println(e.toString());
            pol.remove(x); // removing val (ignoring)
        }
    }

    public Polynomial(Map<Integer,Integer> mp){
        pol = new TreeMap<>(Collections.reverseOrder());
        pol.putAll(mp);
        if(mp.isEmpty()==true){
            degree = -1; //empty map means degree should be neg
        }
        for (Map.Entry<Integer,Integer> ent : mp.entrySet()){
            try{
                if(ent.getKey()<0){
                    throw new IllegalArgumentException("Power of a term can't be negative. The term ignored");
                }
                if (ent.getKey() > degree) {
                    degree = ent.getKey();
                }
            }
            catch(IllegalArgumentException e){
                System.out.println(e.toString());
                pol.remove(ent.getKey()); //ignoring neg vals in the map given
            }
        }
    }

    //copy construct
    public Polynomial(Polynomial p){
        pol = new TreeMap<>();
        pol.putAll(p.getPol());
        degree = p.Degree();
    }

    //adding polynomial to this one
    public void add(Polynomial a){
        Map<Integer, Integer> temp = new TreeMap<>(Collections.reverseOrder());
        temp.putAll(pol);
        for (Map.Entry<Integer,Integer> ent : a.getPol().entrySet()){
            try {
                if (ent.getKey() < 0){
                    throw new IllegalArgumentException("Power of a term can't be negative. The term ignored");
                }
                if (temp.containsKey(ent.getKey())) {
                    temp.put(ent.getKey(), ent.getValue() + temp.get(ent.getKey())); //adding same pows together
                } 
                else {
                    temp.put(ent.getKey(), ent.getValue()); // if not same add to new poly
                }
                if (ent.getKey() > degree) {
                    degree = ent.getKey(); // keep setting degree
                }
                if (temp.get(ent.getKey()) == 0){
                    temp.remove(ent.getKey()); //remove 0
                }
            }
            catch(IllegalArgumentException e){
                System.out.println(e.toString());
            }
        }
        pol.clear();
        pol.putAll(temp);
    }

    public static Polynomial add(Polynomial a, Polynomial b){
        Polynomial p = new Polynomial(0,0); //makes new poly
        p.add(a); //adds first poly
        p.add(b); // adds second
        return p;
    }

    public void subtract(Polynomial a){
        Map<Integer, Integer> map = new TreeMap<>(Collections.reverseOrder());
        map.putAll(a.getPol());
        Polynomial p = new Polynomial();
        for (Map.Entry<Integer,Integer> ent : map.entrySet()){
            p.add(new Polynomial(ent.getKey(), ent.getValue() * -1)); //makes all val neg
        }
        add(p); //adds neg vals (subtraction)
    }

    public static Polynomial subtract(Polynomial a, Polynomial b){
        Polynomial p = new Polynomial(0,0);
        p.add(a); //add poly to p
        p.subtract(b); //use sutract 
        return p;
    }

    public Polynomial multiply(Polynomial a){ 
        Polynomial p = new Polynomial();
        for (Map.Entry<Integer,Integer> first : pol.entrySet()){
            for (Map.Entry<Integer,Integer> second : a.getPol().entrySet()){
                p.add(new Polynomial(first.getKey() + second.getKey(), first.getValue() * second.getValue()));
            }
        }
        return p;
    }
    
    public int Degree() { //returns degree of poly
        return this.degree;
    }
    public int getDegree() { //same method but made for tester class since getDegree is used in it.
        return this.degree;
    }

    public int coefficient(int x){
        return pol.get(x); //gets coeff of key x
    }

    public void changeCoefficient(int x, int y){
        pol.replace(x,y); //repalces coeff of x with y
    }

    public void removeTerm(int x){
        pol.remove(x); //gets rid of term
    }

    public double evaluate(double x){
        double result = 0;
        for (Map.Entry<Integer, Integer> ent : pol.entrySet()){
            result += Math.pow(x,ent.getKey()) * ent.getValue(); // does power and addition for each term with input x
        }
        return result;
    }


    public Map<Integer,Integer> getPol() {
        Map<Integer,Integer> ord = new TreeMap<>(pol);
        return ord; // gets ordered poly map
    }
  
    @Override
    public boolean equals(Object o){ //checkls of two polys are equal with obj equal method
        if (this == o){
            return true;
        } 
        if (o == null || getClass() != o.getClass()){
            return false;
        }
        Polynomial test = (Polynomial) o;
        return Objects.equals(pol, test.getPol());
    }

    @Override
    public String toString(){
        String s = "";
        Map<Integer,Integer> x = new TreeMap<Integer,Integer>(Collections.reverseOrder());
        x.putAll(pol); //order list just incase not ordered
        int c = 0; //counter
        for (Map.Entry<Integer, Integer> ent : x.entrySet()){
            if (c == 0){
                if (ent.getValue() != 0) {
                    if (ent.getValue() != 1) {
                        s += ent.getValue();
                    }
                    if (ent.getKey() != 0) {
                        s += "x";
                    }
                    if (ent.getKey() != 1 && ent.getKey() != 0) {
                        s += ent.getKey();
                    }
                }
            }
            else{
                if (ent.getValue() != 0) {
                    if (ent.getValue() > 0) {
                        s += " + ";
                    }
                    else{
                        s += " ";
                    }
                    if (ent.getValue() != 1) {
                        s += ent.getValue();
                    }
                    if (ent.getKey() != 0) {
                        s += "x";
                    }
                    if (ent.getKey() != 1 && ent.getKey() != 0) {
                        s += ent.getKey();
                    }
                }
            }
            c++;
        }
        return s;
    }

    @Override
    public int compareTo(Polynomial o) {
        if(this.evaluate(0)>o.evaluate(0)){
            return 1;
        }
        else if(this.evaluate(0)<o.evaluate(0)){
            return -1;
        }
        else{
            return 0;
        }
    }
}