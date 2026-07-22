import java.util.Scanner;

public class baividu1{
    public static int demUoc(int n){
        int count = 0;
        for(int i = 1; i <= Math.sqrt(n); i++){
            if(n % i == 0){
                ++count;
                if(i != n / i){
                    ++count;
                }
            }
        }
        return count;
    }
    public static int tongUoc(int n){
        int sum = 0;
        for(int i = 1; i <= Math.sqrt(n); i++){
            if(n % i == 0){
                sum += i;
                if(i != n / i){
                    sum += n / i;
                }
            }
        }
        return sum;
    }
    public static boolean nguyenTo(int n){
        if(n < 2){
            return false;
        }
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    public static boolean chuSoNguyenTo(int n) {
        while(n != 0){
            int r = n % 10;
            if(r != 2 && r != 3 && r != 5 && r != 7){
                return false;
            }
            n /= 10;
        }
        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        int dem = 0;
        int count1 = 0, count2 = 0;
        for(int i = a; i <= b; i++){
            if(nguyenTo(i) && chuSoNguyenTo(i)){
                ++dem;
            }
            if(nguyenTo(i)) count1++;
            if(chuSoNguyenTo(i)) count2++;

        }
        System.out.println(dem + " voi " + count1 + " " + count2);
        int n = sc.nextInt();
        System.out.println("So uoc: " + demUoc(n));
        System.out.println("Tong cac uoc: " + tongUoc(n));
        nguyenTo(n);
    }
}