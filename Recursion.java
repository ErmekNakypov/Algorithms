public class Main {

    public static void main(String[] args) {
        System.out.println(factorial(4));
    }
    /*private static int factorial(int n) {
        int result = 1;
        if (n == 1 || n == 0) {
            return result;
        }
        result = n * factorial(n-1);
        return result;
    }*/

    public static int factorial(int x) {
        if (x == 0) return 1;
        System.out.println("x = " + x);
        x = x * (factorial(x - 1));
        System.out.println("Проход по стеку: x = " + x);
        return x;
    }

}
