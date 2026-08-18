class Solution {
public:
      int maxArea(vector<int>& height){
      int st=0, end=height.size()-1;
      int maxWater=0;

      while(st < end){
        int wight=end-st;
        int ht=min(height[st], height[end]);
        int currWater = wight*ht;
        maxWater=max(currWater,maxWater);
         
         height[st] < height[end] ? st++: end--;
      }
      return maxWater;
    }
};


//       int maxWater=0;
//       for(int i=0;i<height.size(); i++){
//         for(int j=i+1; j<height.size();j++){
//             int w=j-i;
//             int ht=min(height[i],height[j]);
//             int currWater=w*ht;
//              maxWater=max(maxWater,currWater);
//         }
//       }
//       return maxWater;
//     }
// };