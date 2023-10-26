<html>
<head>
<title>Makefiles</title>
<h1>why makfile exists</h1>
<p>Makefiles are used to help decide which parts of a large program need to be recompiled. In the vast majority of cases, C or C++ files are compiled.</p>
<p>There are a variety of implementations of Make, but most of this guide will work on whatever version you're using. However, it's specifically written for GNU Make, which is the standard implementation on Linux and MacOS. All the examples work for Make versions 3 and 4, which are nearly equivalent other than some esoteric differences.</p>
<h2>Running the Examples</h2>
<p>To run these examples, you'll need a terminal and "make" installed. For each example, put the contents in a file called Makefile, and in that directory run the command make. Let's start with the simplest of Makefiles:

hello:
	echo "Hello, World"
Note: Makefiles must be indented using TABs and not spaces or make will fail.

Here is the output of running the above example:

$ make
echo "Hello, World"
Hello, World
That's it! If you're a bit confused, here's a video that goes through these steps, along with describing the basic structure of Makefiles.</p>
<h3>Makefile Syntax</h3>
<p>A Makefile consists of a set of rules. A rule generally looks like this:

targets: prerequisites
	command
	command
	command
The targets are file names, separated by spaces. Typically, there is only one per rule.
The commands are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
The prerequisites are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies</p>
<h3>The essence of Make</h3>
<p>Let's start with a hello world example:

hello:
	echo "Hello, World"
	echo "This line will print if the file hello does not exist."
There's already a lot to take in here. Let's break it down:

We have one target called hello
This target has two commands
This target has no prerequisites
We'll then run make hello. As long as the hello file does not exist, the commands will run. If hello does exist, no commands will run.

It's important to realize that I'm talking about hello as both a target and a file. That's because the two are directly tied together. Typically, when a target is run (aka when the commands of a target are run), the commands will create a file with the same name as the target. In this case, the hello target does not create the hello file.

Let's create a more typical Makefile - one that compiles a single C file. But before we do, make a file called blah.c that has the following contents:

// blah.c
int main() { return 0; }
Then create the Makefile (called Makefile, as always):

blah:
	cc blah.c -o blah
This time, try simply running make. Since there's no target supplied as an argument to the make command, the first target is run. In this case, there's only one target (blah). The first time you run this, blah will be created. The second time, you'll see make: 'blah' is up to date. That's because the blah file already exists. But there's a problem: if we modify blah.c and then run make, nothing gets recompiled.

We solve this by adding a prerequisite:

blah: blah.c
	cc blah.c -o blah
When we run make again, the following set of steps happens:

The first target is selected, because the first target is the default target
This has a prerequisite of blah.c
Make decides if it should run the blah target. It will only run if blah doesn't exist, or blah.c is newer than blah
This last step is critical, and is the essence of make. What it's attempting to do is decide if the prerequisites of blah have changed since blah was last compiled. That is, if blah.c is modified, running make should recompile the file. And conversely, if blah.c has not changed, then it should not be recompiled.

To make this happen, it uses the filesystem timestamps as a proxy to determine if something has changed. This is a reasonable heuristic, because file timestamps typically will only change if the files are modified. But it's important to realize that this isn't always the case. You could, for example, modify a file, and then change the modified timestamp of that file to something old. If you did, Make would incorrectly guess that the file hadn't changed and thus could be ignored.

Whew, what a mouthful. Make sure that you understand this. It's the crux of Makefiles, and might take you a few minutes to properly understand. Play around with the above examples or watch the video above if things are still confusing.</p>

</html>
