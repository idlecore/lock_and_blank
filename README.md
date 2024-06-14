# Lock & Blank
Lock & Blank is a Windows tool which instantaneously locks the screen and turns off all attached monitors.

I wanted a way to turn off the screen when I knew I would be leaving my PC for an extended time but was not going to be turning it off. Changing the power settings to be very short did not work well, because short trips away from my PC when I didn't want to blank the screen (refilling water, bathroom breaks, etc) would take more time when sitting back down at my desk. After much investigation, I learned that there was no way to do this by default in Windows, and the existing solutions were not open source. Additionally, there was sparse documentation regarding any other method to do this despite being only a couple of lines of code.

## Creating a Shortcut
Lock & Blank was created by a posix enthusiust, and as such, provides no built-in mechanism for capturing keyboard shortcuts.

There are two primary options for creating a shortcut for this application under Windows.

### 1. AutoHotkey Script
An AutoHotkey script is my preferred method of executing Lock & Blank. Here's an example script which replaces the default Windows+L lock binding:
```
#L::Run lock_and_blank.exe
```
To learn more about AutoHotkey check out the [AHK docs](https://www.autohotkey.com/docs/v1/Tutorial.htm).

### 2. Creating A Windows Shortcut
This method is built in to Windows. Although it is less than ideal, it will work in restrictive environments where AHK may not. This is the method that I use on my gaming PC, since many games will flag AHK as a cheating tool.

1. Create a shortcut for lock_and_blank.exe by right-clicking and choosing "Create shortcut".
2. Pin the shortcut to the taskbar by either dragging the shortcut onto the taskbar or by right-clicking and choosing "Pin to taskbar".
3. Once on the taskbar, right click on the icon, and then once-again right click on the name of the program, then click on "Properties".
4. Under the "Shortcut" tab, click on the field next to "Shortcut key:" and enter your keyboard shortcut.
5. Click "Apply" and then "OK" to exit.

## Building
Just run build.bat from Developer Command Prompt or Developer Powershell. That's it. Really.

I'm open to suggestions on alternative build systems for Windows C++. I would typically use Cmake to generate make files usable by MinGW, but this is a two line program. Being fast and light my goal.
