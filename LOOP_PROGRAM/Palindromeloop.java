package LOOP_PROGRAM;

import java.util.Scanner;

public class Palindromeloop {
    /*declare num:integer
     a:integer
     b:integer
     n:integer
     set b=0;
     read num
     n=num
     while num>0
     a=num mod 10;
     b=b*10+a
     num=num/10
     end while
     if b=n then
     print"pallinddrome"
     else
       print not pallindrome"
       end if
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0;
        int num = sc.nextInt();
        int b = 0;
        int n = num;
        while (num > 0) {
            a = num % 10;
            b = b * 10 + a;
            num = num / 10;
        }
        if (b == n) {
            System.out.println("pallindrome");
        } else
            System.out.println("not pallindrome");

    }

}