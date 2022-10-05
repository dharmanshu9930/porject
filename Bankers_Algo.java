package com.company.os;

class Bankers_Algo
{

    // Number of processes
    static int P = 5;

    // Number of resources
    static int R = 3;

    // Function to find the need of each process
    static void calculateNeed(int[][] need, int[][] maxm,
                              int[][] allot)
    {
        // Calculating Need of each P
        for (int i = 0 ; i < P ; i++)
            for (int j = 0 ; j < R ; j++)
                need[i][j] = maxm[i][j] - allot[i][j];
    }

    // Function to find the system is in safe state or not
    static void isSafe(int[] avail, int[][] maxm, int[][] allot)
    {
        int [][]need = new int[P][R];
        calculateNeed(need, maxm, allot);
        boolean []finish = new boolean[P];
        int []safeSeq = new int[P];
        int []work = new int[R];

        System.arraycopy(avail, 0, work, 0, R);

        int count = 0;
        while (count < P)
        {
            boolean found = false;
            for (int p = 0; p < P; p++)
            {
                if (!finish[p])
                {
                    int j;
                    for (j = 0; j < R; j++)
                        if (need[p][j] > work[j])
                            break;

                    if (j == R)
                    {
                        for (int k = 0 ; k < R ; k++)
                            work[k] += allot[p][k];
                        safeSeq[count++] = p;
                        finish[p] = true;
                        found = true;
                    }
                }
            }
            if (!found)
            {
                System.out.print("System is not in safe state");
                return;
            }
        }

        System.out.println("System is in safe state.");
        for (int i = 0; i < P ; i++)
            System.out.print("P"+safeSeq[i] + " -> ");

    }

    // Driver code
    public static void main(String[] args)
    {
        int[] avail = {3, 3, 2};
        int[][] maxm = {{7, 5, 3},
                {3, 2, 2},
                {9, 0, 2},
                {2, 2, 2},
                {4, 3, 3}};

        int[][] allot = {{0, 1, 0},
                {2, 0, 0},
                {3, 0, 2},
                {2, 1, 1},
                {0, 0, 2}};

        isSafe(avail, maxm, allot);
    }
}
