import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.io.*;

public class Airport {
    private Queue<String> takeOffPlanes;
    private Queue<String> landingPlanes;
    private ArrayList<String> planes = new ArrayList<String>();

    //constructor
    public Airport(){
        takeOffPlanes = new LinkedList<String>();
        landingPlanes = new LinkedList<String>();
        planes = new ArrayList<String>();
    }

    // adds a new flight to list
    public void addTakeOff(String f){
        takeOffPlanes.add(f);
    }
    
    // adds a new flight to list
    public void addLanding(String f){
        landingPlanes.add(f);
    }

    public String handleNextAction() {
        if(landingPlanes.isEmpty() && takeOffPlanes.isEmpty()) { //if both are empty
                return "No plane is waiting to land or take-off.";
        }
        else {
            if(!landingPlanes.isEmpty()) { 
                String p = landingPlanes.remove();
                planes.add("Flight "+p+" landed."); //landed planes
                return "Flight "+p+" is landing."; //output
            }
            String p = takeOffPlanes.remove();
            planes.add("Flight "+p+" taken-off."); //taken off planes
            return "Flight "+p+" is taking off."; //output
        }
    }

    public String waitingPlanes() {
        if(landingPlanes.isEmpty() && takeOffPlanes.isEmpty()) {
            return "No plane is in the landing and take-off queues.";
        }
        else{
            String o = "";
            if(!landingPlanes.isEmpty()) {
                o += "Planes waiting to Land\n-----------------------\n";
                for (String string : landingPlanes) {
                    o+=string+"\n";
                }
            }
            o += "Planes waiting to Take-off\n-----------------------\n";
            for (String string : takeOffPlanes) {
                o+=string+"\n";
            }
            return o;
        }
    }

    public String log() {
        if(planes.isEmpty()) {
            return "No activity Exists";
        }
        String o = "List of the landing/taking-off activities\n-----------------------------------------\n";
        o += "";
        Collections.reverse(planes);
        for(String planeString : planes){
            o+=planeString+"\n";
        }
        Collections.reverse(planes);
        return o;
    }

    public void log(String f) throws IOException{
        FileOutputStream file = new FileOutputStream(f);
        DataOutputStream newFile = new DataOutputStream(file);
        System.out.println("Writing the airport log to the file...");
        newFile.writeUTF(log());
        System.out.println("Done.");
        newFile.close();   
    }
}
