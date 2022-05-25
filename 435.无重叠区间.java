/*
 * @lc app=leetcode.cn id=435 lang=java
 *
 * [435] 无重叠区间
 */

// @lc code=start
class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        if(intervals.length == 0)
            return 0;
            Arrays.sort(intervals, new Comparator<int[]>() {
                public int compare(int[] a, int[] b) {
                    return a[1] - b[1];
                }
            });
        //排序
        //个数  无重叠区间至少一个
        int count = 1;
        //排序完毕后，第一个区间就是x
        int x_end = intervals[0][1];
        for(int[] inter : intervals){
            int start = inter[0];//开始的区间
            if(start >= x_end){
                count ++;
                x_end = inter[1];
            }
        }
        return (intervals.length - count);
    }

    // public int eraseOverlapIntervals(int[][] intvs) {
    //     if (intvs.length == 0) return 0;
    //     // 按 end 升序排序
    //     Arrays.sort(intvs, new Comparator<int[]>() {
    //         public int compare(int[] a, int[] b) {
    //             return a[1] - b[1];
    //         }
    //     });
    //     // 至少有一个区间不相交
    //     int count = 1;
    //     // 排序后，第一个区间就是 x
    //     int x_end = intvs[0][1];
    //     for (int[] interval : intvs) {
    //         int start = interval[0];
    //         if (start >= x_end) {
    //             // 找到下一个选择的区间了
    //             count++;
    //             x_end = interval[1];
    //         }
    //     }
       
    // }
}
// @lc code=end

