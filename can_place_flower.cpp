class Solution {
public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int cnt = 0;
    int i = 0;
    
    while(i < flowerbed.size()) {
      if( flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && 
        ( i == flower.size()-1 || flowerbed[i+1] == 0) )
      {
        flowerbed[i] = 1;
        cnt++;
      }
      
      if(cnt >= n) return true;
      i++;
    }
    return false;
  }
}
