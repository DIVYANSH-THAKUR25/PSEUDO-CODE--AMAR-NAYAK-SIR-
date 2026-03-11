package LOOP_PROGRAM;

public class Armstrong {

     /*       Declare num,a,d,n :integer
        set d=0;
        read num
        n=num
         while(num>0)
        a:= num mod 10
          d+=a*a*a
        num=num/10;
        end while
        if(b==n)
        print"LOOP_PROGRAM.Palindromeloop.Armstrong"
        else print"not" */


        public static void main(String[] args) {
            int num = 1233, a = 0, d = 0, n = num;
            while (num > 0) {
                a = num % 10;
                d += a * a * a;
                num = num / 10;
            }
            if(d==n)
                System.out.println("LOOP_PROGRAM.Palindromeloop.Armstrong");
            else System.out.println("not");
        }}



