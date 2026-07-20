import java.util.Scanner;

public class Untitled1{

    public static void display(){
        System.out.println("Xin chao 28tech!");
        System.out.println("Ham void");
        System.out.println("28tech.com.vn");
    }

    public static void displayNumber(long x, long y, long z){
        System.out.println(x + ", " + y + ", " + z);
        long tong = x+y+z;
        System.out.println("x+y+z = " + tong);
        System.out.println("KET THUC!");
    }

    public static long solve(long a, long b, long c){
        System.out.println("28tech.com.vn");
        System.out.println(2*a + " " + 3*b + " " + 4*c);
        return a*b*c;
    }

    public static boolean check(long n){
        int tong = 0;
        while(n != 0){
            tong += n % 10;
            n /= 10;
        }
        return tong % 10 == 8;
    }

    public static boolean so_dep(int n){
        if(n == 0){
            return false;
        }
        int chan = 0;
        int le = 0;
        while(n != 0){
            if(n % 2 == 0){
                chan++;
            } else {
                le++;
            }
        }
        return chan == le;
    }

    public static boolean chanLe(){
        if(n == 0){
            return true;
        }
        int chan = 0, le = 0;
        while (n != 0){
            if(n % 2 == 0){
                chan++;
            } else {
                le++;
            }
        }
        return chan > le;
    }

    // public static boolean check(int n){
    //     int tong = 0;
    //     while(n != 0){
    //         tong = n % 10;
    //         n /= 10;
    //     }
    //     return chanLe(tong);
    // }

    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        display();
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            if(so_dep(i)){
                System.out.println(i + " ");
            }
        }
        long x = sc.nextLong();
        if(check(x)){
            System.out.println("28tech");
        } else {
            System.out.println("29tech");
        }
        long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong();
        displayNumber(a, b, c);
        System.out.println(solve(a, b, c));
    }
}
