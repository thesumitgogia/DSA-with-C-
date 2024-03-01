class Solution(object):
    def canChange(self, start, target):
        n = len(start)        
        space1 = space2 = 0       
        for i, ch in enumerate(start):
            space1 += 1 if ch == '_' else 0        
        for i, ch in enumerate(target):
            space2 += 1 if ch == '_' else 0            
        if space1 != space2:
            return False
        
        i = j = 0
        while i < n and j < n:
            if start[i] == '_':
                i += 1
                continue
            if target[j] == '_':
                j += 1
                continue
            if start[i] != target[j]:
                return False
            ch = start[i]
            if ch == 'L':
                if j > i:
                    return False
            if ch == 'R':
                if j < i:
                    return False
            i += 1
            j += 1
        
        return True
        
start = "_L__R__R_"
target = "L______RR"

s = Solution()
s.canChange(start, target)