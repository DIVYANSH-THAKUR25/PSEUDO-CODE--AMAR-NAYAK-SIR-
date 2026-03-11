package numbersystem;
public class BinaryToDecimal {
    public static void main(String[] args) {
        convertToDecimal("10100");
        convertToDecimal("101101");
        convertToDecimal("110110");
    }
    public static void convertToDecimal(String binary) {
        int decimal = 0;
        int base = 1;
        for (int i = binary.length() - 1; i >= 0; i--) {
            if (binary.charAt(i) == '1') {
                decimal += base;
            }
            base *= 2;
        }
        System.out.println("Binary " + binary + " to Decimal: " + decimal);
    }
}
