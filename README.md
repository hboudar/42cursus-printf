<h1 align="center">
	📖 Ft_printf
</h1>

<p align="center">
	<b><i>A 2D game escape adventure</i></b><br>
</p>
<p align="center">
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Cloneg7/printf?color=lightblue" />
<img alt="Code language count" src="https://img.shields.io/github/languages/count/Cloneg7/printf?color=yellow" />
<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Cloneg7/printf?color=blue" />
</p>

## 📜 Table of Contents

- [💡 Mandatory Part](#m)
- [💡 Bonus Part](#b)

# 💡 Mandatory Part <a name = "m"></a>

> _This Function :._
    is used to print formatted output in numerous ways to the standard output stdout.

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries**.

### Instructions

**1. To use the function in your code, simply include a main() and its header:**


```C
int  main()
{
  ft_printf("%s\n", "hello world");
  return (0);
}
```
```C
#include "ft_printf.h"
```

#### 📋 Testing
> _Simply run this command :_
```shell
make && ./ft_printf
```
-------
# 💡 Bonus Part <a name = "b"></a>

> _As a <code>bonus</code> to the Mandatory requirement, the function should has :._
	<ul>
  	<li>
    	<ul>
         <li>Make the player lose when they touch an enemy patrol.</li>
         <li>Add some sprite animation.</li>
         <li>Display the movement count directly on screen instead of writing it in the shell.</li>
    	</ul>
  	</li>
   <ul/>

**1. To use the function in your code, simply include its header:**

```C
#include "so_long_bonus.h"
```

#### 📋 Testing
> _Simply run this command (add as an argument a map from maps with a mapb...):_
```shell
make bonus && ./so_long_bonus maps/mapb.ber
```
