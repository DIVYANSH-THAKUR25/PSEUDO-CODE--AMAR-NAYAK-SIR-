package LOOP_PROGRAM;

import java.util.Scanner;

public class Search_the_no_presentornot {
    /*  Declare num,a,d:integer
        Declare found: boolean;
         set found=false;
       read num ,d(target)
       while(num>0)
       a: num mod 10;
       if(a==d)then
         found=true;
                break
     end if
       num=num/10;
       end while
   if found == true then
  print "present"
  else print"not"
  end if */
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int d=sc.nextInt();
        int a=0;
        boolean count=false;
        while(num>0){
            a=num%10;
            if(a==d){
             count=true;
            break;
            }
            num/=10;
        }
        if(count=true) {
            System.out.println("present");
        }else System.out.println("not");

    }
}
