import java.util.Scanner;  // Needed for the Scanner class
import java.io.*;
import java.util.ArrayList; // import the ArrayList class

public class TriviaGame{

	public static void main(String[] args) throws IOException{
		Scanner keyboard = new Scanner (System.in);
		ArrayList<String> data = new ArrayList<String>();
		ArrayList<Question> questions = new ArrayList<Question>();
		Player p1 = new Player(0);
		Player p2 = new Player(0);
		int cur =0;
		String line;
		String ans;

		FileReader fr = new FileReader("trivia.txt"); // reads deposits
      	BufferedReader be = new BufferedReader(fr);
      	Scanner ss = new Scanner(fr);
      	line = ss.nextLine();
      	while(ss.hasNext()){
        	data.add(line); // adds to the array list
        	line = ss.nextLine();
      	}
        data.add(line); // last entry
      	fr.close();

      	Question q1 = new Question();
      	q1.setQ(data.get(0));
      	q1.setA1(data.get(1));
      	q1.setA2(data.get(2));
      	q1.setA3(data.get(3));
      	q1.setA4(data.get(4));
      	q1.setC(data.get(5));
      	questions.add(q1);

      	Question q2 = new Question();
      	q2.setQ(data.get(6));
      	q2.setA1(data.get(7));
      	q2.setA2(data.get(8));
      	q2.setA3(data.get(9));
      	q2.setA4(data.get(10));
      	q2.setC(data.get(11));
      	questions.add(q2);

      	Question q3 = new Question();
      	q3.setQ(data.get(12));
      	q3.setA1(data.get(13));
      	q3.setA2(data.get(14));
      	q3.setA3(data.get(15));
      	q3.setA4(data.get(16));
      	q3.setC(data.get(17));
      	questions.add(q3);

      	Question q4 = new Question();
      	q4.setQ(data.get(18));
      	q4.setA1(data.get(19));
      	q4.setA2(data.get(20));
      	q4.setA3(data.get(21));
      	q4.setA4(data.get(22));
      	q4.setC(data.get(23));
      	questions.add(q4);

      	Question q5 = new Question();
      	q5.setQ(data.get(24));
      	q5.setA1(data.get(25));
      	q5.setA2(data.get(26));
      	q5.setA3(data.get(27));
      	q5.setA4(data.get(28));
      	q5.setC(data.get(29));
      	questions.add(q5);

      	Question q6 = new Question();
      	q6.setQ(data.get(30));
      	q6.setA1(data.get(31));
      	q6.setA2(data.get(32));
      	q6.setA3(data.get(33));
      	q6.setA4(data.get(34));
      	q6.setC(data.get(35));
      	questions.add(q6);

      	Question q7 = new Question();
      	q7.setQ(data.get(36));
      	q7.setA1(data.get(37));
      	q7.setA2(data.get(38));
      	q7.setA3(data.get(39));
      	q7.setA4(data.get(40));
      	q7.setC(data.get(41));
      	questions.add(q7);

      	Question q8 = new Question();
      	q8.setQ(data.get(42));
      	q8.setA1(data.get(43));
      	q8.setA2(data.get(44));
      	q8.setA3(data.get(45));
      	q8.setA4(data.get(46));
      	q8.setC(data.get(47));
      	questions.add(q8);

      	Question q9 = new Question();
      	q9.setQ(data.get(48));
      	q9.setA1(data.get(49));
      	q9.setA2(data.get(50));
      	q9.setA3(data.get(51));
      	q9.setA4(data.get(52));
      	q9.setC(data.get(53));
      	questions.add(q9);

      	Question q10 = new Question();
      	q10.setQ(data.get(54));
      	q10.setA1(data.get(55));
      	q10.setA2(data.get(56));
      	q10.setA3(data.get(57));
      	q10.setA4(data.get(58));
      	q10.setC(data.get(59));
      	questions.add(q10);

      	for(int i =0;i<10;i++){
      		if(i%2==0){
      			cur = 1;
      		}
      		else if(i%2==1){
      			cur = 2;
      		}
      		System.out.printf("Question for player #%d\n",i%2+1);
      		System.out.println("-----------------------");
      		System.out.printf("%S\n",questions.get(i).getQ());
      		System.out.printf("%S\n",questions.get(i).getA1());
      		System.out.printf("%S\n",questions.get(i).getA2());
      		System.out.printf("%S\n",questions.get(i).getA3());
      		System.out.printf("%S\n",questions.get(i).getA4());
      		System.out.print("Enter the number of the correct answer: ");
      		ans = keyboard.next();
      		if(Integer.parseInt(ans) == Integer.parseInt(questions.get(i).getC())){
      			System.out.printf("Correct!\n\n");
      			if(cur==1){
      				p1.addPoint();	
      			}
      			else if(cur==2){
      				p2.addPoint();
      			}
      			
      		}
      		else{
      			System.out.printf("Sorry, that is incorrect. The correct answer is %S\n\n",questions.get(i).getC());
      		}
      	}

      	System.out.printf("Player 1's points: %d\n",p1.getPoints());
      	System.out.printf("Player 2's points: %d\n",p2.getPoints());
      	if(p1.getPoints()>p2.getPoints()){
      		System.out.printf("Player 1 wins!\n");
      	}
      	else if(p1.getPoints()<p2.getPoints()){
      		System.out.printf("Player 2 wins!\n");
      	}
      	else if(p1.getPoints()==p2.getPoints()){
      		System.out.printf("It is a Tie!\n");
      	}
	}
}