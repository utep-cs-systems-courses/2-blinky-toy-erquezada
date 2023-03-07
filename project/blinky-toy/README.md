Project 2 - Blinky Toy
The MSP430 uses a state machine to control the state of the toy changed with buttons.

Running the Program
To compile and run the program on the MSP430, use:

$ make load

To clean any unnecessary or temporary files from the project directory:

$ make clean

State Machine
The state machine has various different states each which do a different thing depending on the input from the buttons. The exact states and their actions depend on the specific design of the Blinky Toy project. However, in general, a state machine is a computational model used to describe the behavior of a system or program based on a finite number of states, transitions between those states, and actions associated with each state and transition.

In the case of the Blinky Toy project, the state machine is used to control the behavior of the toy based on the input from the buttons. For example, pressing a button may cause the toy to switch between different blinking patterns or turn off entirely. The state machine is responsible for keeping track of the current state of the toy and transitioning to a new state based on the button input.

The implementation of the state machine in the Blinky Toy project can vary depending on the programming language and hardware used. However, in general, it involves defining the various states and their associated actions, as well as the transitions between those states based on the input from the buttons. This can be done using conditional statements, loops, or other programming constructs.

Overall, the state machine is an essential component of the Blinky Toy project, as it allows for a more interactive and dynamic user experience by enabling the toy to respond to user input in a meaningful way.