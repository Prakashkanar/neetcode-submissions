class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False

        s_map = {}
        t_map = {}

        for i in s:
            s_map[i] = s_map.get(i, 0) + 1
        
        for j in t:
            t_map[j] = t_map.get(j, 0) + 1

        for i in s:
            if i not in t or s_map[i] != t_map[i]:
                return False
        
        return True

        