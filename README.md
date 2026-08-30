# competitive-programming
**Competitive Programming** is a programming contest where you are given a set of test cases and you have to solve them in a given time limit. The contest is usually held in a computer science conference or a programming competition.

## How to start?

### Step 1: Fork this repository

Fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

### Step 2: Clone the repository

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:

```
git clone "url you just copied"
```

where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.


For example:

```
git clone https://github.com/rahul-choudhari/competitive-programming.git
```

where `rahul-choudhari` is your github username. Here you're copying the contents of the **rahul-choudhari** repository on GitHub to your computer.


### Step 3: Create a new branch

Change to the repository directory on your computer (if you are not already there):

```
cd competitive-programming
```

Now create a new branch:

```
git checkout -b my-new-branch
```

This changes your working directory to the repository directory on your computer. You can verify this with the `pwd` command.


### Step 4: Make necessary changes and commit those changes

Make changes to the files you'd like to contribute. This could be bug fixes, new algorithms, additional test cases, or any other changes.

```
git add .
```

This adds all the changes to the branch.

```
git commit -m "Your detailed description of your changes."
```

This commits those changes to the branch. The message you provide should be descriptive enough to understand the changes you made.

### Step 5: Push changes to GitHub

```
git push -u origin my-new-branch
```

This pushes the changes from your local branch to your remote branch on GitHub. The `-u` flag tells git to remember the parameters, so that a simple `git push` will do the same thing.

### Step 6: Create a new pull request

1. Visit your repository on GitHub
2. Click on the Compare & pull request button.
3. Add a title and description to your pull request that explains your precious effort.
4. Click on Send pull request.

Voila! Your changes are now queued for review.