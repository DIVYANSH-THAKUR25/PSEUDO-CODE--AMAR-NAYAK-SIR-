package LOOP_PROGRAM;

import java.util.Scanner;

public class check_no_frequency {
    /* Declare num,a,d,count:integer
       set count=0;
       read num ,d(target)
       while(num>0)
       a: num mod 10;
       if(a==d)then
       increment count;
       end if
       num=num/10;
       end while
       print count;
     */
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int d=sc.nextInt();
        int count=0 ,a=0;
        while(num>0){
            a=num%10;
            if(a==d) count++;
            num/=10;

        }
        System.out.println(count);


    }
}