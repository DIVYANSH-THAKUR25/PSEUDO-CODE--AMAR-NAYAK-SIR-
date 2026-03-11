package LOOP_PROGRAM;

import java.util.Scanner;

public class SUM_series {
    /*declare num,sum integer
      sum=0
      read num
      for i:1  to num
      square=sum+(i*i)
      sum:i+sum
      end for
      print sum */
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int sum=0;
        int num=sc.nextInt();
        for(int i=1;i<=num;i++){

            sum=i+sum;
        }
        System.out.println(sum);
    }


}
