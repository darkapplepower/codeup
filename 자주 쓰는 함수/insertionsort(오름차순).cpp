void insertion_sort(int *list, int len)
{
        for (int i = 1; i < len; i++)
        {
                int t = list[i];
                int p = i - 1;
                while ((p >= 0) && (list[p] > t))
                {
                        list[p + 1] = list[p];
                        p--;
                }
                list[p + 1] = t;
        }
}