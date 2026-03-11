package numbersystem;
public class DecimalToBinary {
    public static void main(String[] args) {
        /*
        15 MOD 0
        OUTPUT: ERROR (ArithmeticException in Java)
        */
        try {
            int result = 15 % 0;
            System.out.println(result);
        } catch (ArithmeticException e) {
            System.out.println("OUTPUT: ERROR (" + e.getMessage() + ")");
        }

        /*
        i) a -> 20
        ii) a -> 45
        iii) a -> 54
        */
        convertToBinary(20);
        convertToBinary(45);
        convertToBinary(54);
    }
    

    public static void convertToBinary(int decimal) {
        if (decimal == 0) {
            System.out.println("0");
            return;
        }
        StringBuilder binary = new StringBuilder();
        int temp = decimal;
        while (temp > 0) {
            binary.insert(0, (temp % 2));
            temp = temp / 2;
        }
        System.out.println(binary.toString());
    }
}
