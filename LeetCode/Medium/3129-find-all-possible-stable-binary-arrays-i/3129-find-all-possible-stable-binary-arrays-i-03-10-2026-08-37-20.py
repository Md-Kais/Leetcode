class Solution:
    def numberOfStableArrays(self, z: int, o: int, l: int) -> int:
        f = cache(lambda q,p:q<1>p or sum(f(p,q-k-1) for k in range(min(l,q))))
        return (f(z,o)+f(o,z))%(10**9+7)
        