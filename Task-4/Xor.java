import java.util.Scanner;

public class Xor {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long q = input.nextLong();

        q = reduceQ(q);
        
        long answer = getAnswerFromFormula(a, b, q);
        System.out.println(answer);
    }

    private static long reduceQ(long q) {
        if (q % 3 == 0)
            return 3;
        else if (q % 3 == 1)
            return 4;
        else
            return 5;
    }

    private static long getAnswerFromFormula(long a, long b, long q) {
        if (q == 1)
            return a;
        else if (q == 2)
            return b;
        else
            return getAnswerFromFormula(a, b, q - 1) ^ getAnswerFromFormula(a, b, q - 2);
    }

}