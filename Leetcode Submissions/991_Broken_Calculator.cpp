// class Solution {
// public:
//     int brokenCalc(int startValue, int target) {
//         // we work backwards, to convert target to startValue
//         int count = 0;
//         while(target != startValue){
            
//             if(target < startValue)
//             {
//                 target++;
//             }
//             else if(target > startValue){
//                 if(target%2 == 0){
//                     target = target/2;
//                 }
//                 else
//                     target++;
//             }
//             count++;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        // we work backwards, to convert target to startValue
        int count = 0;
        while(target > startValue)
        {
            if(target%2 == 0)
                target = target/2;
            else
                target++;
            count++;
        }
        count += (startValue - target);
        return count;
    }
};