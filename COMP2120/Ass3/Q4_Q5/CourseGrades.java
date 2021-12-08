public class CourseGrades implements Analyzable{
    private GradedActivity[] grades;

    public CourseGrades(){
        grades = new GradedActivity[4];
    }

    public CourseGrades(GradedActivity[] g){
        grades = g;
    }

    public void setLab(GradedActivity lab){
        grades[0] = lab;
    }
    public void setPassFailExam(PassFailExam exam){
        grades[1] = exam;
    }
    public void setEssay(GradedActivity essay){
        grades[2] = essay;
    }
    public void setFinalExam(FinalExam finalExam){
        grades[3] = finalExam;
    }

    @Override
    public String toString() {
        return "Lab Score: " + grades[0].getScore() + "\t\t\t" +"Grade : " + grades[0].getGrade() + "\n" 
        + "Pass/Fail Exam Score: " + grades[1].getScore() + "\t" +"Grade : " + grades[1].getGrade() + "\n" 
        + "Essay Score: " + grades[2].getScore() + "\t\t" +"Grade : " + grades[2].getGrade() + "\n" 
        + "Final Exam Score: "+ grades[3].getScore() + "\t\t" +"Grade : " + grades[3].getGrade();
    }
   
    public double getAverage() {
        double avg = 0;
        for(int i =0; i<grades.length;i++){
            avg+=grades[i].getScore();
        }
        avg/=4.0;
        return avg;
    }
    
    public GradedActivity getHighest() {
        GradedActivity high = grades[0];
        for(int i =0; i<grades.length;i++){
            if(grades[i].getScore()>high.getScore()){
                high = grades[i];
            }
        }
        return high;
    }

    public GradedActivity getLowest() {
        GradedActivity low = grades[0];
        for(int i =0; i<grades.length;i++){
            if(grades[i].getScore()<low.getScore()){
                low = grades[i];
            }
        }
        return low;
    }  
}