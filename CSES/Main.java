import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (n == 1) {
            System.out.println(1);
            return;
        }

        if (n <= 3) {
            System.out.println("NO SOLUTION");
            return;
        }

        // Print even numbers first
        for (int i = 2; i <= n; i += 2) {
            System.out.print(i + " ");
        }

        // Print odd numbers next
        for (int i = 1; i <= n; i += 2) {
            System.out.print(i + " ");
        }

        System.out.println(); // Print a newline at the end
    }
}
