# Getting Started

## Contributing Rules
Before you start, you will need to agree to our [contributing rules](../../.github/CONTRIBUTING.md)

## Setting up Visual Studio Code
Install [VSCode](https://code.visualstudio.com/) with the following addons:
- [EditorConfig.EditorConfig](https://marketplace.visualstudio.com/items?itemName=EditorConfig.EditorConfig)
- [vlad333000.sqf](https://marketplace.visualstudio.com/items?itemName=vlad333000.sqf)

If you install the [Git command line](https://git-scm.com/downloads) then you can commit changes in the editor.
- You may also want to install [eamodio.gitlens](https://marketplace.visualstudio.com/items?itemName=eamodio.gitlens) to make using Git in VSCode easier.

Alternatively, you can install [GitHub Desktop](https://desktop.github.com/) and use it separately.

## Git LFS
This repo requires Git LFS.

Search online for how to install Git Large File System for your OS. It might be as simple as `git lfs install`, if you are using a GUI then it may install it for you automatically.

## Setting up HEMTT
Copied from [the HEMTT book](https://hemtt.dev/installation/index.html)
### Windows

HEMTT can be installed using [Winget](https://github.com/microsoft/winget-cli).

```powershell
winget install hemtt
```

To update HEMTT with winget use:

```powershell
winget upgrade hemtt
```

### Linux & MacOS

HEMTT can be installed using an installer script.

```bash
curl -sSf https://hemtt.dev/install.sh | sh
```

The script can be ran again to update HEMTT.

### Manual Download

The latest HEMTT release can be downloaded from the [GitHub releases page](https://github.com/brettmayson/HEMTT/releases).

You will want to add this manually downloaded file to your path or to `tools/hemtt/`where the build scripts will also check.

Make sure that you name it `hemtt.exe`. If you are on Windows then this is the default, if you are on Linux then you will need to add the `.exe` extention.

Builds are available for Windows, Linux, and MacOS.

## Installing the arma 3 tools
Copied from [the HEMMTT book](https://hemtt.dev/installation/arma3tools.html)
### Arma 3 Tools

HEMTT will use your installation of Arm 3 Tools to binarize supported files (p3d, rtm, wrp).

#### Installation

##### Windows

Arma 3 Tools can be installed using [Steam](https://store.steampowered.com/app/233800/Arma_3_Tools/). After installation, run the tools at least once to ensure the registry keys are set.

##### Linux

HEMTT can use either Proton or Wine to run the tools. `wine64` is highly recommended, as using Proton will be much slower and may cause windows to pop up while running the tools. HEMTT will always use `wine64` if it is available.

###### Steam

Arma 3 Tools can be installed using [Steam](https://store.steampowered.com/app/233800/Arma_3_Tools/) with Proton. You can also use [SteamCMD](https://developer.valvesoftware.com/wiki/SteamCMD) to install the tools on servers.

###### ~/.local/share/arma3tools

The tools can be installed manually into `~/.local/share/arma3tools` by copying the files from a Windows installation. If the tools are installed with Steam and inside this directory, HEMTT will prefer to use `~/.local/share/armatools`.

###### HEMTT_BI_TOOLS Environment Variable

If you have the tools installed in a different location, you can set the `HEMTT_BI_TOOLS` environment variable to the path of the tools. HEMTT will always use this path if it is set.
