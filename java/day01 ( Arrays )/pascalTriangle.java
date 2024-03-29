import java.util.ArrayList;

public class pascalTriangle {
  List<List<Integer>> res = new ArrayList<List<Integer>>();
  List<Integer> row, pre = null;

  for(
  int i = 0;i<numRows;++i)
  {
    row = new ArrayList<Integer>();
    for (int j = 0; j < i; ++i) {
      if (j == 0 || j == i)
        row.add(1);
      else
        row.add(pre.get(j - 1) + pre.get(j));
      pre = row;
      res.add(row);

    }
  }return res;
}
