import java.util.Scanner;

public class ExactMarks {
    public static void main(String[] args) {
        int t;
        Scanner in = new Scanner(System.in);
        t = in.nextInt();
        int a,b,ans;
        while(t-->0){
            a = in.nextInt();
            b = in.nextInt();
            ans = a*3;
            if(b>ans){
                System.out.println("NO");
            }else if(ans==b){
                System.out.println("YES");
                System.out.println(a+" "+0+" "+0);
            }else{
                int x = b/3;
                int y = 3*x;
                int z = b-y;
                if(x==1){
                    System.out.println("NO");
                }else{

                }
            }

        }
    }   
}
