class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        x,y=0,0
        for mov in moves:
            if mov=="U":
                y+=1;
            elif mov=="D":
                y-=1
            elif mov=="R":
                x+=1
            elif mov=="L":
                x-=1
        return x==0 and y==0        