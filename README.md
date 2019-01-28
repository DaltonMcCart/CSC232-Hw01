# hw01-the-big-five
An introduction to the "Big Five" in C++ class design.

## Background

Provide context for this lab.

### Pre-lab Reading

Prior to lab, the student should have read

* Lecture notes
    * [https://github.com/msu-csc232-sp19/lec01-intro-to-recursion](https://github.com/msu-csc232-sp19/lec01-intro-to-recursion)
    * [https://github.com/msu-csc232-sp19/lec02-cpp-classes](https://github.com/msu-csc232-sp19/lec02-cpp-classes)
* Chapter 1 - Data Abstraction: The Walls (pp. 1-26, Carrano/Henry)
* C++ Interlude 1: C++ Classes (pp. 31-46, Carrano/Henry)
* Any prerequisites cited in the above chapters

## Goals

What will they get out of this lab?

## Getting Started

To get started, follow these steps:

1. Open a Cygwin terminal window. If this is the first time you're doing this, there may be some initializations that take place; be patient, they'll occur quickly.
1. (If you have not done so already) open a Windows File Explorer window and create a folder (in your home directory) to keep your work, e.g., CSC232.
1. (If you have not done so already) switch back to the Cygwin terminal window. Our first step (which will only need to be done once) is to create a symbolic link ("symlink") to the directory you created in the previous step. As mentioned (and demonstrated in a previous lecture), Cygwin's "home" directory and Windows' "home" directory are *not* the same directories on the file system. Enter the following command to create a symlink to your CSC232 directory (noting that the `$` represents the command line prompt and is *not* to be typed):

    ```bash
    $ ln -s /cygdrive/c/Users/<your login name>/CSC232 CSC232
    $ cd CSC232
    $ echo "Testing...\n" >> test.txt
    $ ls
    test.txt
    $
    ```

    If successful, you should see (from your Windows finder window) a new file created in the CSC232 directory. If not, please raise your hand to receive help from your instructor or GA. Since we don't need this file, delete (using the Windows file explorer) it (i.e., send it to the Trash). As a final step to ensure the symlink is set up correctly, issue another `ls` command in your Cygwin terminal window (you should no longer see the `test.txt` file.)

    ```bash
    $ ls
    $
    ```
1. Use the GitHub classroom assignment link found in the Microsoft Teams Labs channel to have the lab assignment created for you in your GitHub account.
1. Once the lab has been created in your GitHub account, clone your repository:

    ```bash
    $ git clone <repo-url-copied-from-github>
    ... git output ...
    $
    ```
1. Next navigate to this cloned repo and create/checkout the `develop` branch:

    ```bash
    $ cd hw01-the-big-five-your-git-hub-username
    $ git checkout -b develop
    $
    ```
1. (If you have not done so already) configure your name and email with `git` (you'll only have to do this once). In the steps below, we set the value and then inspect it.

    ```bash
    $ git config --global user.name "Your Name"
    $ git config --global user.name
    Your Name
    $ git config --global user.email "your-username@live.missouristate.edu"
    $ git config --global user.email
    your-username@live.missouristate.edu
    $
    ```
1. Finally, let's make sure that the remote (i.e., GitHub) is set up to track our `develop` branch:

    ```bash
    $ git push -u origin develop
    $
    ```

## Steps

Discuss how to proceed with this assignment.

### Destructor

### Copy Constructor and Move Constructor

### Copy Assignment and Move Assignment (`operator=`)

### Defaults

### Compiling, linking and executing an executable

## Submission Details

Discuss creating pull request and adding `joshuaellis555` as a reviewer (in addition to `professordaehn`)

### Due Date

This homework assignment is due Friday, 25 January 2019 by 11:59:59 PM. _Any changes to your pull request made after that time force the late penalty policy_.

### Grading Rubric

All homework assignments are graded on the following general rubric:

| Points | Requirements |
|--------|--------------|
| 5      | All tests pass (or otherwise correct code); consistent, readable style|
| 4      | At most 80% of the tests pass; consistent, readable style|
| 3      | At most 50% of the tests pass; inconsistent or poor programming style|
| 2      | At most 30% of the tests pass; inconsistent or poor programming style|
| 1      | None of the tests pass; inconsistent or poor programming style (but at least a pull request was created)|
| 0      | Student did not submit pull request|

### Late Penalty

In the first 24 hour period following the due date, this lab will be penalized 0.5 points meaning the grading _starts_ at 4.5 (out of 5 total possible) points.

In the second 24 hour period following the due date, this lab will be penalized 1.0 points meaning the grading _starts_ at 4 (out of 5 total possible) points.