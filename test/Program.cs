public class Program {

    private static void Sort(int[] array, int left, int right)
    {
        if (left >= right) return;
        
        int mid = (left + right) / 2;
        Sort(array, left, mid);
        Sort(array, mid + 1, right);
        Merge(array, left, right, mid);
    }

    private static void Merge(int[] array, int left, int right, int mid)
    {
        int[] buffer = new int[right - left + 1];
        int leftIndex = left;
        int rightIndex = mid + 1;
        int bufferIndex = 0;

        while (leftIndex <= mid && rightIndex <= right)
        {
            if (array[leftIndex] <= array[rightIndex])
            {
                buffer[bufferIndex] = array[leftIndex];
                leftIndex++;
                bufferIndex++;
            }
            else
            {
                buffer[bufferIndex] = array[rightIndex];
                rightIndex++;
                bufferIndex++;
            }
        }

        while (leftIndex <= mid)
        {
            buffer[bufferIndex] = array[leftIndex];
            bufferIndex++;
            leftIndex++;
        }
        
        while (rightIndex <= right)
        {
            buffer[bufferIndex] = array[rightIndex];
            bufferIndex++;
            rightIndex++;
        }

        for (int i = 0; i < buffer.Length; i++)
        {
            array[i + left] = buffer[i];
        }
    }
    
    public static void Main(string[] args)
    {
        Console.Write("Enter length: ");
        int length = int.Parse(Console.ReadLine());
        
        int[] array = new int[length];
        Input(array);
        Print(array);
        
        Sort(array, 0, length - 1);
        Print(array);
    }

    private static void Input(int[] array)
    {
        for (int i = 0; i < array.Length; i++)
        {
            Console.Write($"Enter array[{i}]: ");
            array[i] = int.Parse(Console.ReadLine());
        }
    }

    private static void Print(int[] array)
    {
        for (int i = 0; i < array.Length; i++)
        {
            Console.Write(array[i] + " ");
        }
        Console.WriteLine();
    }
}