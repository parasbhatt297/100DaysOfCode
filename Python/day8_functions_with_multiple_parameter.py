def greetwith(name , location):
    print(f"Hello {name}!")
    print(f"What is it in like {location}?")

greetwith("paras" , "uttarakhand")
greetwith("uttarakhand" , "paras")
#As we can see the output name and location got swapped but if you want to handle it you can 
#do this something like this=>
greetwith(location="uttarakhand" , name="paras") #now although order is changed but still you mentioned name specifically 
#hence function will print correct output