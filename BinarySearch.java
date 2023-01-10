public class Main {

    public static void main(String[] args) {
        int[] arr = {5, 3, 6, 2, 10};
        System.out.println(binarySearch(arr, 10));
    }

    public static Integer binarySearch(int[] arr, int num) {
        int low = 0;
        int high = arr.length - 1;
        int mid = 0;

        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == num)
                return mid;

            if (arr[mid] < num)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return null;
    }
}
