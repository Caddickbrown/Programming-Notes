# General
These are some general notes and useful information about programming or other related topics.

## Repositories
### GitHub
#### Creating a Repository

#### Merging Two Existing Repositories
1. Create/Locate the Repo that you want to Merge into.
2. cd into the Repo
3. git remote add -f <name> <url>
4. git merge <name>/master --allow-unrelated-histories
5. git remote remove <name>
6. git commit -m "Merged <name> Repo"

You may need to fix some conflicts, but this should be minimal. (Opening in VSCode is the easiest way to sort this)

##### Example
`
cd /Users/caddickbrown/Documents/Projects/General
git remote add -f SApps https://github.com/Caddickbrown/SApps.git
git merge SAppTemplate/master --allow-unrelated-histories
`