import requests
import sys

response2 = requests.get("https://earthquake.usgs.gov/ws/designmaps/asce7-16.json?latitude=34&longitude=-118&riskCategory=III&siteClass=C&title=Example")
#Let's check the response is OK (return code 200)
if(response2.status_code == 200):
    #We will convert the response to json 
    Design_info = response2.json()
    print('got it')

#Let's request the tall buildings information
response = requests.get("https://data.sfgov.org/resource/5kya-mfst.json")
print(response)

#Let's check the response is OK (return code 200)
if(response.status_code == 200):
    #We will convert the response to json 
    tallBuildings = response.json()
    #print(tallBuildings)
    
    #we will read the first building in the response and print some information
    building = tallBuildings[0]
    print("Building Name", building["name"])
    print("\toccupancy: ", building["occupancy"])
    print("\tAddress: ", building["address"])
    for i in range(len(tallBuildings)):
        print("Building Name: {}".format(tallBuildings[i]["name"]))
        print("\tStructural Type: {}".format(tallBuildings[i]["structural_types"]))
        try:
            print("\tStories: {}".format(tallBuildings[i]["stories_above_grade"])) 
        except:
            print("\tStory count is unknown")
           
        print("\tHeight: {} ft.".format(tallBuildings[i]["height_ft"]))
        print("\toccupancy: {}".format(tallBuildings[i]["occupancy"]))
     #   print("\tPGA: {}".format(Design_info["fpga"]))    

response2 = requests.get("https://earthquake.usgs.gov/ws/designmaps/asce7-16.json?latitude=34&longitude=-118&riskCategory=III&siteClass=C&title=Example")
#Let's check the response is OK (return code 200)
if(response2.status_code == 200):
    #We will convert the response to json 
    Design_info = response2.json()
    print('got it')

    #print(tallBuildings)
#Excercise 1: Print to the screen the list of buildings 
#including relevant information about the building like structure type
#occupancy, number of stories, , total area.


#Excercise 2: Write the data from excercise 1 into a csv text file including latitude and longitude


#Exercise 3: Can we get PGA from USGS API for each building and include it in the output file
