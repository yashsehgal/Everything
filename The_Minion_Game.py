#https://www.facebook.com/ratnadeep.pragwalit/posts/2791519601129696
#Subscribed by Ratnadeep Ghosh

def minion_game(s):
    ss=0
    sk=0
    for i in range(0, len(s)):
        add=len(s)-i
        if s[i] in ['A','E','I','O','U']:
            sk +=add
        else:
            ss +=add
            
    if ss>sk:
        print('Stuart '+str(ss))
    elif ss<sk:
        print("Kevin "+str(sk))
    else:
        print("Draw")  
        
if __name__ == '__main__':
    s = input()
    minion_game(s)
