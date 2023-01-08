class Solution
{
public:
    string convert(string s, int numRows)
    {
        int ptr = 0;
        int row = 0;
        int col = 0;
        int arr[1001][1001] = {0};
        string answer = "";
        if (numRows == 1)
        {
            return s;
        }

        while (ptr != s.length())
        {
            for (int i = 0; i < numRows; i++)
            {
                arr[row++][col] = s[ptr++];
                if (ptr == s.length())
                    break;
            }
            row--;
            row--;
            col++;
            if (ptr == s.length())
                break;
            for (int i = 0; i < numRows - 2; i++)
            {
                arr[row--][col++] = s[ptr++];
                if (ptr == s.length())
                    break;
            }

            if (ptr == s.length())
                break;
        }
        for (int i = 0; i < 1000; i++)
        {
            for (int j = 0; j < 1000; j++)
            {
                if (arr[i][j] != 0)
                    answer += arr[i][j];
            }
        }
        return answer;
    }
};