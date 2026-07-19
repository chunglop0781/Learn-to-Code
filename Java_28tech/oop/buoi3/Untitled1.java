import java.util.Scanner;

public class Untitled1 {
    public static void main(String[] args) {

        // Scanner sc = new Scanner(System.in);

        // long n = sc.nextLong();
        // if(n < 0){
        //     System.out.println("Loi n!");
        //     return;
        // }
        // if(n == 0){
        //     System.out.println("Tong = 0");
        //     System.out.println("Dem = 1");
        //     return;
        // }
        // int dem = 0;
        // long tong = 0;
        // while(n != 0){
        //     dem++;
        //     tong = n % 10;
        //     n /= 10;
        // }
        // System.out.println("Tong = " + tong);
        // System.out.println("Dem = " + dem);


        // long n = sc.nextLong();
        // while(n != 0){
        //     int du = (int)(n % 10);
        //     if(du % 2 == 0){
        //         System.out.println("28 tech");
        //     } else if(du % 2 != 0){
        //         System.out.println("29 tech");
        //     }
        //     n /=10;
        // }


        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            if(n % 2 == 0){
                System.out.println("EVEN");
            } else if(n % 2 != 0){
                System.out.println("ODD");
            }
        }

    }
}
