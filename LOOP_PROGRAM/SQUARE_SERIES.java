package LOOP_PROGRAM;
//sum=0
//read num
//    for i:1  to num
//   sum=sum+(i*i)
//    end for
//  print sum */
public class SQUARE_SERIES {
    public static void main(String[] args) {
        int num=4;
        int sum=0;
        for(int i=1;i<=num;i++){
                sum= sum+(i*i);
    }
        System.out.println(sum);}
}
