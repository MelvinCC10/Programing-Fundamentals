The purpose of this lab is to gain practice using variables for basic user input, processing, and output.

Your friend has approached you, asking to write a program to help sort files on a media server. You want to show your friend a proof of concept for a program that can take data entry, and can output processed data.

# Constraints:
Do not use any concepts beyond the current chapter, unless explicitly stated in the tasks below

# Task 1: Setup Variables
1. Declare variables to contain 5 filenames, of type string
2. Declare variables to contain 5 file sizes, of type double
3. Declare a variable to contain the sum of all file sizes, of type double
4. Declare a variable to contain the average of all file sizes, of type double
5. Separate Task 1 from Task 2 by pressing ENTER on your keyboard. This provides a single line of whitespace in your code

# Task 2: Input Data
1. Prompt the user to, "\tEnter file name and file size in MB separated by a space: "
2. Note the '\t' character preceding the string "Enter". This pushes the output one tab space inward from the margin
3. use cin to store the data into variables from Task 1.1 and Task 1.2
4. Repeat the prompt and input 4 more times. You should have a total of 5 prompts, and 5 requests for data
5. Separate Task 2 from Task 3 by pressing ENTER on your keyboard. This provides a single line of whitespace in your code

# Task 3: Process Data
1. Assign the sum of all variables from Task 1.2 to the varable from Task 1.3
2. Divide the variable from Task 1.3 by 5, and assign that value to the variable from Task 1.4
3. Separate Task 3 from Task 4 by pressing ENTER on your keyboard. This provides a single line of whitespace in your code

# Task 4: Output Data
1. Output the variables from Task 1.1 and Task 1.2 in the form of complete sentences. Example: " is MB in size"
2. This should be done a total of 5 times, but the first of those 5 should use \n\n to separate the user input from the system output.
3. Inform the user how much space the files are taking up using the variable from Task 1.3. This should be done in the form of a complete sentence, and should use \n\n to provide a natural separation of output on the screen. cout << "\n\n\tYou are using "
4. Inform the user of the average size of each file using the variable from Task 1.4. This should be done in the form of a complete sentence.
