Here are the main reset options and their differences:

1. Soft Reset (git reset --soft <commit>):
    -> This option moves the HEAD pointer to the specified commit without modifying the index or working directory.
    -> Useful for "undoing" commits while keeping the changes staged, allowing to recommit them with additional changes.

2. Mixed Reset (git reset --mixed <commit> or simply git reset <commit>):
    -> It moves the HEAD pointer to the specified commit and updates the index to match, but does not modify the working directory.
    -> Useful for undoing commits and un-staging changes, allowing to modify and re-stage them before committing again.
3. Hard Reset (git reset --hard <commit>):
    -> This option moves the HEAD pointer to the specified commit, resets the index to match, and overwrites all changes in the working directory.
    -> Any changes since the specified commit are permanently lost.
    -> Useful for completely discarding changes and reverting to a specific state in history.



This is how squashing commit enhances commit history readability.

1. Squashing commits merges several small commits into larger, more informative ones.
2. It improves the clarity and coherence of the commit history by eliminating unnecessary detail.
3. Simplifies code reviews by presenting changes in consolidated, logical units.
4. Helps maintain a clean and understandable history, aiding project management and collaboration.