import java.util.Scanner;

public class Wordle {
    public static void main(String[] args) {
        int t;
        Scanner in = new Scanner(System.in);
        t = in.nextInt();
        String s1,s2;
        StringBuilder sb = new StringBuilder();
        in.nextLine();
        while(t-->0){
            s1 = in.nextLine();
            s2 = in.nextLine();
            for (int i = 0; i < s1.length(); i++) {
                if(s1.charAt(i)==s2.charAt(i)){
                    sb.append("G");
                }else{
                    sb.append("B");
                }
            }
            System.out.println(sb);
        }
    }
}
