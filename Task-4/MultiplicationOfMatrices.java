import java.util.Scanner;

public class MultiplicationOfMatrices {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        int RA = scanner.nextInt();
        int CA = scanner.nextInt();
        int[][] A = receiveMatrix(RA, CA);


        int RB = scanner.nextInt();
        int CB = scanner.nextInt();
        int[][] B = receiveMatrix(RB, CB);


        int[][] result = multiplyMatrices(A, B);

        for (int i = 0; i < RA; i++) {
            for (int j = 0; j < CB; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }

    }

    public static int[][] receiveMatrix(int r, int c) {
        int[][] matrix = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        return matrix;
    }

    public static int[][] multiplyMatrices(int[][] A, int[][] B) {
        int RA = A.length;
        int CB = B[0].length;
        int[][] result = new int[RA][CB];

        for (int i = 0; i < RA; i++) {
            for (int j = 0; j < CB; j++) {
                int sum = 0;
                for (int k = 0; k < A[0].length; k++) {
                    sum += A[i][k] * B[k][j];
                }
                result[i][j] = sum;
            }
        }

        return result;
    }
}
