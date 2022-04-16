/**
 * Main
 */
import java.util.Scanner;
class Main {

    public static void main(String[] args) {
        int t;
        Scanner in = new Scanner(System.in);
        t = in.nextInt();
        int a;
        while(t-->0){
            a = in.nextInt();
            System.out.println(a%7==6?(a/7+1):(a/7));
        }
    }
}
