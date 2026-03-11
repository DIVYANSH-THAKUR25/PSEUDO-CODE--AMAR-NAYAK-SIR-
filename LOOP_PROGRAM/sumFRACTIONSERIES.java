package LOOP_PROGRAM;

public class sumFRACTIONSERIES {
    public static void main(String[] args) {
        /*set sum=0;
        for(i :1 to n){
        sum=sum=(1/i);
        for(i :1 to n){
        sum=sum=(1/i*i);

         */
        int sum=0;
        int n=5;
        for(int i=1;i<=n;i++){
            sum=sum+(1/i);}

        System.out.println(sum);
            for(int i=1; i<=n;i++){
                sum=sum+(1/i*i);}
                System.out.println(sum);



            }
}
