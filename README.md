# colobot-autocompletion

This is a cpp header files to make cbot available to use with intellisense. Adding some functions and defined macros for autocompletion and error checking by intellisense based on cpp.

Note: since cbot is not entirely cpp, some to be expected work differently. I might try java to cover this up.

## Preparation

** It is recommended to use VSCode **

Just put the header file somewhere and then force include the file for intellisense by adding the path to it.

File extension "\*.cpp" isn't recognized by colobot. Instead, use "\*.cbot" to save your scripts. 

Since "\*.cbot" isn't recognized by intellisense (on VSCode), files association need to be added like such: 

```json
//if on vscode, add this in Files: Associaton
"*.cbot": "cpp"
```

If you're on VSCode, it's best to use a workspace or open it on Colobot's script folder and change the settings based on "Workspace" to prevent it to accidentally be included in your cpp projects.


## Contributing
Contributing is absolutely appreciated, since the current header file isn't good enough to be use for the game. Any solutions would be benefit for the users and my knowledge.

And please, if you want to commit changes, please include the link to the sources of the workaround/method that you are using so I can accept it faster.