import java.util.Scanner;

class pattern8 {
    public static void main(String[] args) {
        int n;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        sc.close();

        for (int row = 1; row <= n; row++) {

            char start = (char) ('A' + (n - row));

            for (int col = 1; col <= row; col++) {

                System.out.print(start + " ");
                start++;

            }

            System.out.println();
        }
    }
}
