import java.util.*;
public class Average{
	private int data[] = new int[5];
	private double mean;

	public Average(){
		Scanner	keyboard = new Scanner(System.in);
		for(int i=0;i<data.length;i++){
			System.out.printf("Enter score number %d: ",(i+1));
            int score = keyboard.nextInt();
            data[i] = score;
		}
		selectionSort();
		calculateMean();
	}

	public void calculateMean(){
		double total = 0;
		for(int i = 0;i<data.length;i++){
			total+= data[i];
		}
		mean = total/data.length;
	}

	public String toString(){
        return Arrays.toString(data)+" MEAN: "+ Double.toString(mean);
    }

	public void selectionSort(){
        for(int i = 0; i<data.length - 1; i++){
            int temp = i;
            for (int j = i+1; j<data.length; j++){
                if (data[j]>data[temp]){
                    temp = j;
                }
            }
            int big = data[temp];
            data[temp] = data[i];
            data[i] = big;
        }
    }
}