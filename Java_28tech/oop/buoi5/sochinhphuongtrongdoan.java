import java.util.Scanner;

public class sochinhphuongtrongdoan {

    public static long ucln(long a, long b){
        while (b != 0) {
            long r = b % a;
            a = b;
            b = r;
        }
        return a;
    }

    // public static int gcd2(long a, long b){
    //     if(a == 0 || b == 0){
    //         return a+b;
    //     }
    //     while (a != b) {
    //         if(a > b){
    //             a = a - b;
    //         } else{
    //             b = b - a;
    //         }
    //     }
    //     return a;
    // }

    public static long bcnn(long a, long b){
        return a * b / ucln(a, b);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(), b = sc.nextLong();
        System.out.println("UCLN = " + ucln(a, b));
        System.out.println("BCNN = " + bcnn(a, b));
        long start = (long)Math.ceil(Math.sqrt(a)); //ceil: tron len
        long end = (long)Math.floor(Math.sqrt(b)); //floor: tron xuong
        for(long i = start; i <= end; i++){
            System.out.print(i * i + " ");
        }
    }
}