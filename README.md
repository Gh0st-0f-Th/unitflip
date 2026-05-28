# unitflip 

A lightweight, interactive command-line unit/currency converter written in C.  
No APIs. No internet. Just math — fast and offline.

---

## How It Works

`unitflip` uses a simple ratio-based approach:

1. You tell it how many **target units** equal **1 source unit**
2. Then keep entering values to convert — as many as you want
3. Enter a non-numeric key to exit

---

## Example

```
To convert your unit to your target unit, I need you to enter how many
target units equal to 1 unit of the currency you want to convert from.

=> 0.86        ← 1 USD = 0.86 EUR

=> Now, enter the currency you want to convert from.
=> 100
=> 86.0000 UNIT

=> 250
=> 215.0000 UNIT
```

> Works for **any** unit pair — not just currencies.  
> Kilometers to miles? Kilograms to pounds? It handles it all.

---

## Build & Run

**Requirements:** GCC (or any C compiler)

```bash
# Compile
gcc unitflip -o unitflip

# Run
./unitflip
```

---

## Features

-  Continuous conversion loop — no restarting needed
-  Auto-detects whole numbers and displays them cleanly (e.g. `86` instead of `86.0000`)
-  Graceful exit on invalid/non-numeric input
-  Zero dependencies — pure C standard library

---

## Limitations

- Requires the user to know the conversion ratio manually (no live exchange rate lookup)
- Only supports one ratio per session — restart to change the ratio

---

## License

MIT — free to use, modify, and distribute.
