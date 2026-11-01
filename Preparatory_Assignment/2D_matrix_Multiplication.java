import java.util.*;

public class Main {

public static void main(String[] args) {

Scanner sc = new Scanner(System.in);

// matrx1 dimensions:
System.out.println("Enter no. of rows for m1 :");
int r1 = sc.nextInt();
System.out.println("Enter no. of cols for m1 :");
int c1 = sc.nextInt();

// matrix2 dimensions:
System.out.println("Enter no. of rows for m2 :");
int r2 = sc.nextInt();
System.out.println("Enter no. of cols for m2 :");
int c2 = sc.nextInt();


// Edge case 
if(c1 != r2) {
System.out.println("Matrix multiplication is not possible!");
System.out.println("c1 != r2");
return;
}


// populating m1 :
int[][] m1 = new int[r1][c1];
// taking input values of m1:
for(int i=0; i<r1; i++) {
for(int j=0; j<c1; j++) {
    System.out.println("Enter element m1["+(i+1)+"]["+(j+1)+"] :");
	m1[i][j] = sc.nextInt();
}
}

// populating m2 :
int[][] m2 = new int[r2][c2];
// taking input values of m2:
for(int i=0; i<r2; i++) {
for(int j=0; j<c2; j++) {
    System.out.println("Enter element m2["+(i+1)+"]["+(j+1)+"] :");
	m2[i][j] = sc.nextInt();
}
}

// Performing matrix multiplication:
int[][] r = new int[r1][c2];
// perform matrix multiplication:
for(int i=0; i<r1; i++) {
for(int j=0; j<c2; j++) {
for(int k=0; k<r2; k++) {
	r[i][j] += m1[i][k] * m2[k][j];
}
}
}


// displaying result matrix:

System.out.println("");
System.out.println("Matrix multiplication is :");
for(int i=0; i<r1; i++) {
for(int j=0; j<c2; j++) {
	System.out.print(r[i][j] + " ");
}

System.out.println("");
}

sc.close();
}
}