# Elevator
Setting up a simulation for a number of elevators in a building.

# What it does
The project simulates the real-life idea of being able to call an elevator in a building. We assume to have number buildings with _n_ floors and each of them may have a different number _m<sub>k</sub>_ (where _k_ is the unique ID of a building) of elevators that are functional for all the floors in the building. A person is able to make a call for the elevator from any floor _i_ to any floor _j_ given that _i_ and _j_ are within the range [0, _n_]. 

The problem is to find the optimal way of getting the users from floor _i_ to floor _j_ in the shortest time possible, thus finding an efficient way to choose the elevators that should take each order, based on a few given factors.