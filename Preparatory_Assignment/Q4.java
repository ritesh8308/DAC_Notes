import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int totalMarks = 0;
        int numSubjects = 5;

        for (int i = 1; i <= numSubjects; i++) {
            System.out.print("Enter marks for subject " + i + " (out of 20): ");
            int marks = scanner.nextInt();

            // Boundary validation
            if (marks < 0 || marks > 20) {
                System.out.println("Invalid input. Marks must be between 0 and 20. Run the program again.");
                return;
            }
            totalMarks += marks;
        }

        String grade = "";

        if (totalMarks >= 90 && totalMarks <= 100) {
            grade = "Ex";
        } else if (totalMarks >= 80 && totalMarks <= 89) {
            grade = "A";
        } else if (totalMarks >= 70 && totalMarks <= 79) {
            grade = "B";
        } else if (totalMarks >= 60 && totalMarks <= 69) {
            grade = "C";
        } else if (totalMarks < 60) {
            grade = "F";
        }

        System.out.println("\nTotal Marks: " + totalMarks + "/100");
        System.out.println("Grade: " + grade);
        
        scanner.close();
    }
}
