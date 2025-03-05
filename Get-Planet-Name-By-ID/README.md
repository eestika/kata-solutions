# Get Planet Name By ID

**Description**  
The function is supposed to return the correct planet name based on the provided ID (1 through 8). However, it's not returning the correct values initially. Can you figure out why and fix it?

**Example**  
- Input: `3`  
- Output: `Earth`

---

## Implementation

```c
const char *getPlanetName(int id)
{
    const char *name;
    switch (id)
    {
        case 1: name = "Mercury";  break;
        case 2: name = "Venus";    break;
        case 3: name = "Earth";    break;
        case 4: name = "Mars";     break;
        case 5: name = "Jupiter";  break;
        case 6: name = "Saturn";   break;
        case 7: name = "Uranus";   break;
        case 8: name = "Neptune";  break;
        // Potentially add a default case if needed
    }
    return name;
}
```
---

**Usage**
1. Include get_planet_name.c in your C project.
2. Call getPlanetName(id) where id is an integer from 1 to 8.
3. The function returns the corresponding planet name as a string.
---
**Possible Improvements**
Add a default case to handle invalid IDs (e.g., return "Unknown").
Use an array of strings instead of a switch for a more compact approach.

Author: [Daniele Perez / Eestika]

Source: Codewars Kata
