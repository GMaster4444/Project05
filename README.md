# Project05
I plan to add one new hero class: the necromancer.
The necromancer will be similar to the mage class, however their attacks will be bone themed.
These attacks will consist of a basic staff attack, a bone spike spell, and a life drain spell
This classe will be relatively simple to implement, just copying and modifying the mage hero classes
The difficulty will come from the life drain spell

The necromancer.cpp and necromancer.hpp classes were completed.
The necormancer's life drain spell was created using both an Attack(target) and a Heal(this) function.

I realized there were some errors in necromancer.cpp.
I didn't rename the spell name in the life drain function to "Life Drain" and I didn't change the output status to match the necromancer's abilities.
Updated both of those and added a HealingAttack function in entity,hpp/entity.cpp.
This concatenates the text instead of having two paragraphs for a single spell.
Said function also takes an extra input, so it has both healing and damage, in case a future hero has a similar spell with a different damage to healing ratio.