# [SGC Challenge - 2020](https://lucasmpalma.github.io/SGC-2020/)

Hello there!

The campaign for this selection was inspired by the Mission Impossible movies. The character we presented on our banner is called Luther Stickell. 

"He is a senior intelligence operative and computer specialist employed by the Impossible Mission Force and a close friend to Ethan Hunt who joined his team as a disavowed agent during a mission in 1996 and has since returned in all his following missions."

But you're in luck, unlike Luther, you have a very possible challenge to meet.

## Docker

For this challenge you will need to be familiar with the basic docker concepts.

Don't worry, we've prepared some links for you to read.

In addition, we look at the main commands you need to run a pre-booted environment.

* [Docker Docs](https://docker-curriculum.com/)

### Docker Quickstart

* Installing Docker (Ubuntu):
  * `sudo apt update`
  * `sudo apt install docker` (you can also install it with: `sudo snap install docker`)

* Starting Docker:
  * `sudo systemctl start docker`
  * `sudo systemctl enable docker`
  
* Verify installation
  * `docker --version`
  * `docker run hello-world`

* Running the container for the first time: 
  * `cd docker/`
  * `docker build -t sgc .`
  * `docker run --name sgc -ti sgc`
  
* Running the container afterwards:
  * `docker start sgc`
  * `docker exec -ti sgc /bin/bash`

## Libcryptosec

* [Libcryptosec Docs](https://labsec.github.io/libcryptosec/)
* [Source Repository](https://github.com/LabSEC/libcryptosec)

## OpenSSL

* [OpenSSL Docs](https://www.openssl.org/docs/man1.0.2/)	

## Helpful Knowledge & Tools

* [Understanding Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html)
* [GCC Compiling/Linking](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)
* [GDB debugging with examples](https://www.cprogramming.com/gdb.html)


### GDB Cheatsheet

<details>
  <summary>Expand Cheatsheet</summary>
  
| GDB Command               | Description                                                                                                     |
|---------------------------|-----------------------------------------------------------------------------------------------------------------|
| b[reak] \<function>       | Set a breakpoint at the beginning of function [break]                                                           |
| b[reak] <file_name:line>  | Set a breakpoint at line number of the current file. [break]                                                    |
| info b                    | List all breakpoints [info]                                                                                     |
| delete n                  | Delete breakpoint number n [delete]                                                                             |
| r[un] [args]              | Start the program being debugged, possibly with command line arguments args. [run]                              |
| s[tep] [count]            | Single step the next count statments (default is 1). Step into functions. [step]                                |
| n[ext] [count]            | Single step the next count statments (default is 1). Step over functions. [next]                                |
| finish                    | Execute the rest of the current function. Step out of the current function. [finish]                            |
| c[ontinue]                | Continue execution up to the next breakpoint or until termination if no breakpoints are encountered. [continue] |
| l[ist] [optional_line]    | List next listsize lines. If optional_line is given, list the lines centered around optional_line. [list]       |
| set listsize n            | Set the number of lines listed by the list command to n [set listsize]                                          |
| q[uit]                    | quit gdb [quit]                                                                                                 |
| ^C                        | Stop execution                                                                                                  |
</details>
