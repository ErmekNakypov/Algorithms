

import java.util.Scanner;

public class RemoveDuplicate {

    static Scanner scan = new Scanner(System.in);

    static void init(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.printf("Enter the array element[%d]: ", i + 1);
            array[i] = scan.nextInt();
        }
    }

    static void printArray(int[] array) {
        System.out.println("The array with no duplicate:");
        for (int i : array)
            System.out.print(i + " ");
    }
    static int[] removeDuplicate(int[] array) {

        int swapPosition = array.length;

        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < swapPosition; j++) {

                if (array[i] == array[j]) {
                    int temp = array[swapPosition - 1];
                    array[swapPosition - 1] = array[j];
                    array[j] = temp;
                    --swapPosition;
                    j--;
                }
            }
        }

        int[] finalArray = new int[swapPosition];
        for (int i = 0; i < finalArray.length; i++) {
            finalArray[i] = array[i];
        }
        return finalArray;
    }

    public static void main(String[] args) {
        System.out.print("Enter the length:");
        int[] array = new int[scan.nextInt()];
        init(array);
        array = removeDuplicate(array);
        printArray(array);
    }
}
