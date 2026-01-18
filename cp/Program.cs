// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker

using System;
using System.Runtime;

class Maruf
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        while (t-- > 0)
        {
            Solve();
        }
    }

    static void Solve()
    {
        // PerfectRoot();
        PrefixMax();
        // ShiftedMEX();
    }

    static void PerfectRoot()
    {
        int n = int.Parse(Console.ReadLine());

        for (int i = 1; i <= n; i++)
        {
            Console.Write(i);
            if (i < n)
            {
                Console.Write(" ");
            }
        }
        Console.WriteLine();
    }

    static long MaxSum(int[] arr)
    {
        int curr = 0; long res = 0;

        foreach(int i in arr)
        {
            curr = Math.Max(curr, i);
            res += curr;
        }

        return res;
    }

    static void PrefixMax()
    {
        int n = int.Parse(Console.ReadLine());
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

        long res = MaxSum(arr);
        // Console.WriteLine(res);

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                (arr[i], arr[j]) = (arr[j], arr[i]);
                res = Math.Max(res, MaxSum(arr));
                (arr[i], arr[j]) = (arr[j], arr[i]);
            }
        }

        Console.WriteLine(res);
    }

    static void ShiftedMEX()
    {
        
    }
}