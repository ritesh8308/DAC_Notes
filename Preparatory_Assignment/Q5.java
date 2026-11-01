import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        int uppercaseCount = 0;
        int lowercaseCount = 0;
        int digitCount = 0;
        int otherCount = 0;

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);

            if (ch >= 'A' && ch <= 'Z') {
                uppercaseCount++;
            } else if (ch >= 'a' && ch <= 'z') {
                lowercaseCount++;
            } else if (ch >= '0' && ch <= '9') {
                digitCount++;
            } else {
                otherCount++;
            }
        }

        System.out.println("\n--- Character Classification Results ---");
        System.out.println("Uppercase letters found: " + uppercaseCount);
        System.out.println("Lowercase letters found: " + lowercaseCount);
        System.out.println("Digits found: " + digitCount);
        System.out.println("Other characters (spaces, symbols) found: " + otherCount);
        
        scanner.close();
    }
}