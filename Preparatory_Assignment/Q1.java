public class Q1 {
	public static void main(String[] args) {
        if(args.length == 0) {
            System.out.println("Please provide at least one number as a command line arguement.");
            return;
        }

        int max  = Integer.parseInt(args[0]);

        for(int i = 1; i < args.length; i++) {
            int currentNum = Integer.parseInt(args[i]);
            if(currentNum > max) {
                max = currentNum;
            }
        }
        System.out.println("The maximum number is: " + max);
	}
}
