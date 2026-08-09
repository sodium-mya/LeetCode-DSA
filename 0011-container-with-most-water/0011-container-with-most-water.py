class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l=0
        max_water=0
        len_h=len(height)
        r=len_h-1
        while l<r:
            current_height= min(height[l],height[r])
            current_width= r-l
            current_water=current_height*current_width 
            max_water=max(max_water,current_water)
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return max_water