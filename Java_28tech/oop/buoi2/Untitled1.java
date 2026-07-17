import java.util.Scanner;

public class Untitled1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.out.println(10 <= 15);
        // System.out.println(10 <= 10);
        // System.out.println(10 != 20);
        // System.out.println(10 != 10);

        // int n = sc.nextInt();
        // if(n == 10){
        //     System.out.println("Dieu kien dung!");
        // }
        // else if(n != 10){
        //     System.out.println("Dieu kien sai!");
        // }

        char c = 'u';
        System.out.println(Character.isLowerCase(c)); // Kiểm tra c có phải chữ thường không (true/false).
        System.out.println(Character.isUpperCase(c)); // Kiểm tra c có phải chữ hoa không (true/false).
        System.out.println(Character.isAlphabetic(c)); // Kiểm tra c có phải chữ cái không (true/false).
        System.out.println(Character.isDigit(c)); // Kiểm tra c có phải chữ số (0–9) không (true/false).
        System.out.println(Character.toLowerCase(c)); // Chuyển c thành chữ thường.
        System.out.println(Character.toUpperCase(c)); // Chuyển c thành chữ hoa.

    }
}

