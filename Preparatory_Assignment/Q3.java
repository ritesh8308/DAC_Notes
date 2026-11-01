import java.util.*;

public class Q3 {

    public static int fib(int n) {
        if(n == 0)  return 0;
        if(n == 1)  return 1;

        return fib(n-1) + fib(n-2);
    }
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=0; i<n; i++) {
            System.out.print(fib(i) + " ");
        }
        System.out.println();

        sc.close();
	}
}


/**
        import java.util.Scanner;

        public class Fibonacci {
            public static void main(String[] args) {
                Scanner scanner = new Scanner(System.in);
                System.out.print("Enter the number of terms for the Fibonacci series: ");
                int n = scanner.nextInt();

                int firstTerm = 0, secondTerm = 1;

                System.out.println("Fibonacci Series up to " + n + " terms:");
                for (int i = 1; i <= n; i++) {
                    System.out.print(firstTerm + " ");
                    
                    // Compute the next term
                    int nextTerm = firstTerm + secondTerm;
                    firstTerm = secondTerm;
                    secondTerm = nextTerm;
                }
                System.out.println();
                scanner.close();
            }
        }
 */