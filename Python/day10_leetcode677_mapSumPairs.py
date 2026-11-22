mp = {}
def insert(key: str, val: int) -> None:
        mp[key] = val 

def sum(prefix: str) -> int:
        ans = 0
        for key in mp:
           if key.find(prefix) == 0 :
            ans +=mp[key]
        return ans

insert("apple" , 3)
print(sum("ap"))
insert("app" , 2)
print(sum("ap"))