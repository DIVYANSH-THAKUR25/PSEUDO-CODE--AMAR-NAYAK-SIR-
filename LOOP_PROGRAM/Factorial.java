package LOOP_PROGRAM;

public class Factorial {
    /*
    * integer i,num,fact
     read num;
     set fact=1;
     * for i=num to 1 step -1
     * fact=fact*i
     * end for
     * print fact
     * set i=num
     * while(i>=1)
     * fact=fact*i
        i--
* end while      */
    public static void main(String[] args) {
        int num=5;
        int fact=1;
        for(int i=num;i>=1;i--){
            fact=fact*i;
        }
        System.out.println(fact);
    }
}
