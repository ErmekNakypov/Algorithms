public class Main {

    public static void main(String[] args) {
        int[] arr1 = {5, 3, 6, 2, 10};
        sort(arr1);
    }

    public static void sort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            int min = i;

            for (int j = i + 1; j < arr.length; j++) {
                if (arr[min] > arr[j])
                    min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        for (int k : arr)
            System.out.println(k + " ");
    }
}
