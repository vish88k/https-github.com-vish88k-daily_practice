/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
     int findpeak( MountainArray &mountainArr,int n){
        int i=0;
        int j=n-1;
           while(i < j){
        int mid = i + (j - i) / 2;

       if(mountainArr.get(mid) < mountainArr.get(mid + 1))
          i = mid + 1;
       else
           j = mid;
          }
       return i;
       }

          int findinleft(int target,MountainArray &mountainArr,int n,int i,int j){
          while(i<=j){
             int mid=(i+j)/2;
             int value=mountainArr.get(mid);
             if(value==target){
              return mid;
             }
            else if(value>target){
             j=mid-1;
             }
            else{
                i=mid+1;
            }
        }

        return -1;
     }
       int findinright(int target, MountainArray &mountainArr,int n,int i,int j){

      
        while(i<=j){
            int mid=(i+j)/2;
            int value=mountainArr.get(mid);
            if(value==target){
            return mid;
            }
             else if(value>target){
            i=mid+1;
            }
            else{
             j=mid-1;
            }
        }
        return -1;
       }
     




    int findInMountainArray(int target, MountainArray &mountainArr){
        int n=mountainArr.length();
        int peak=findpeak(mountainArr,n);
        if(mountainArr.get(peak)==target){
         return  peak;
        }

        int left=findinleft(target,mountainArr,n,0,peak-1);
        int right=findinright(target,mountainArr,n,peak+1,n-1);
    if(left!=-1){
       return left;
      }
  else{
    return right;
  }
}
           
};