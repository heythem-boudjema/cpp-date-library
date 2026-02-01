# C++ Date Utility Library - clsDate

A lightweight C++ library providing a **clsDate** class for date handling, arithmetic, and calendar operations.

## Features

- Get current system date
- Date validation
- Leap year detection
- Increase/Decrease date by days, weeks, months, years, decades, centuries, millennia
- Calculate differences between dates
- Check weekends and business days
- Print calendar (month/year)
- Vacation calculation
- Age calculation in days

## Usage

```cpp
#include "clsDate.h"
#include <iostream>

int main() {
    clsDate today;
    today.Print();
    today.IncreaseDateByOneDay();
    std::cout << "Tomorrow: ";
    today.Print();
    return 0;
}
