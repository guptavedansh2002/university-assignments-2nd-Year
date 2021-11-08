class num:
    c = 0
    def count(self,c):
        c+=1
        self.c = c


def printing():
    ct = num()
    ct.count(7)
    print(ct.c)

if __name__ == '__main__':
    printing()
