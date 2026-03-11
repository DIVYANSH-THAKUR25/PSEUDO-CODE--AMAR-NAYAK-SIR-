package LOOP_PROGRAM;

import java.util.Scanner;

public class TABLE_OF_NUMBER {
    /* integer i,num;
    * set i=1;
    * read  num
    * while(i<=10)
    *    print num*i;
    * i++;
    * end while   */

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i=1;
        int num=sc.nextInt();
        while(i<=10){
            System.out.println(num*i);
            i++;
        }

    }

}
