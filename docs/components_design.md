## Components design

### Game Manager

| Methods | Objectives |
| --- | --- |
| Switch control | Turn control, activates one character and deactivates another |
| Camera | Focus on the bullet object when it is launched |
| Switch field | Change gravity field |

### Weapon (bullets, missiles, ...)

| Variables | Objectives |
| --- | --- |
| unlocked | Current weapon object can only be chosen if unlocked |

| Methods | Objectives |
| --- | --- |

### Character

| Variables | Objectives |
| --- | --- |
| HP |  |
| ATK |  |
| Shield |  |
| Money |  |
| Fixed talent |  |
| Mobility | ATK, Move, Shield |

| Methods | Objectives |
| --- | --- |
| activate | Enable current character object to act |
| deactivate | Disable current character object to act |
| drag | Record the dragged position; allow players to rotate between launch angles |
| launch | Get a new vector from the projectile to the slingshot, launch the bullet object based on the force direction |
| move | Move the character object to the designated position |
| menu | Open the inventory menu |

### Inventory (Shop)

| Methods | Objectives |
| --- | --- |
| Buy | Use coins to unlock new weapons |
| Change weapon | Switch to the designated weapon object |

### Field effect (Blackhole, Electric field, ...)

| Variables | Description |
| --- | --- |
| gravity |  |
| type | Balckhole, Electric field |

| Methods | Objectives |
| --- | --- |
| Inhalation (0 <= distance <= x) | Inhales any bullet object that comes close to the blackhold object |
| Distortion (x < distance <= y) | Distorts the trajectory of any bullet object that comes close to the blackhole object |

### Blackground element (asteroid, meteorite, ...)

| Variables | Description |
| --- | --- |
| HP | Physical effect |
| Type | Blackhole, Electric field |

| Methods | Objectives |
| --- | --- |
| Collision |  |
| Distortion (x < distance <= y) | Distort the trajectile of any bullet object that comes close to the blackhold object |
