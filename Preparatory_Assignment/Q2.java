import java.util.Scanner;

public class Q2 {

public static long fact(int n) {
    if(n == 0)  return 1;
    if(n == 1)  return 1;

    return n * fact(n-1);
}
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of number :");
        int n = sc.nextInt();
         if(n < 0) {
        System.out.println("Error: Factorial is not defined for negative numbers.");
        return;
        }

        long factorial = fact(n);
        System.out.println("Factorial of " + n + " is: " + factorial);
        sc.close();
	}
}


/**
 * import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a non-negative integer: ");
        int n = scanner.nextInt();

        if (n < 0) {
            System.out.println("Error: Factorial is not defined for negative numbers.");
        } else {
            long factorial = 1; // Using long to accommodate larger results
            for (int i = 1; i <= n; i++) {
                factorial *= i;
            }
            System.out.println("Factorial of " + n + " is: " + factorial);
        }
        scanner.close();
    }
}
 */