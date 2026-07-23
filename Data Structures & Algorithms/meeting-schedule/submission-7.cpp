/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

// class Solution {
// public:
//     bool canAttendMeetings(vector<Interval>& intervals) {
//         vector<pair<int, int>> inter;

//         for (int i = 0; i < intervals.size(); i++) {
//             inter.push_back({intervals[i].start, intervals[i].end});
//         }

//         sort(inter.begin(), inter.end());

//         for (int i = 0; i < inter.size() - 1; i++) {
//             if (inter[i].second > inter[i + 1].first) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        vector<pair<int,int>> inter;

        for (int i = 0; i < intervals.size(); i++) {
            inter.push_back({intervals[i].start, intervals[i].end});
        }

        sort(inter.begin(), inter.end());

        for (int i = 0; i + 1 < inter.size(); i++) {
            if (inter[i].second > inter[i + 1].first)
                return false;
        }

        return true;
    }
};
