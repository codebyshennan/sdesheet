/**
 * @file pascalTriangle.cpp
 * @author
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
Observations:
1. first and last column of every row is 1
2. every number between the 1s (at index i) is formed by adding the values at the indexes i-1 and i of the previous row
3. each row also denotes the number of elements on that row
4. general formula for this is (row-1) choose (column-1)

e.g. to get the number at row 5 column 3
(5-1) C (3-1) -> 4 choose 2 = 6
*/

// https://en.wikipedia.org/wiki/Binomial_coefficient

class Solution
{
public:
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> r(numRows);

    for (int i = 0; i < numRows; i++)
    {
      r[i].resize(i + 1);
      r[i][0] = r[i][i] = 1

          for (int j = 1; j < i; j++)
              r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }

    return r;
  }
};