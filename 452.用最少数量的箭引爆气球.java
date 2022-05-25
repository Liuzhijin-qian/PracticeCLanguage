/*
 * @lc app=leetcode.cn id=452 lang=java
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
    public int findMinArrowShots(int[][] points) {
        //也就是求最大的不重叠区间
        if(points.length == 0)
            return 0;
        Arrays.sort(points, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return a[1] - b[1];
                }
        });//排序

        //最小区间是1
        int count = 1;
        //找到第一个区间的end
        int x_end = points[0][1];
        for(int[] point : points){
            int start = point[0];
            if(start > x_end){
                count++;
                x_end = point[1];
            }
        }
        return count;
    }
}
// @lc code=end

