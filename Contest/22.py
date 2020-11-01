class samia:
    def __init__(self,first,last):
        self.first=first
        self.last=last
        self.email=first+last+'@gmail.com'
    def fullname(self):
        return '{} {}'.format(self.first,self.last)



sami_1=samia('Frajana','Sultana')
sami_2=samia('test','case')
print(sami_1)
print(sami_2)

sami_1.first='Farjana'
sami_1.last='Sultana'
sami_1.email='FarjanaSultana@gmail.com'

#print(sami_1.first,sami_1.last)
#print(sami_1.email)
#sami_1.fullname()
#print(samia.fullname(sami_1))
