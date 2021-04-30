#include "necromancer.hpp"


Necromancer::Necromancer(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid) : 
    Entity(builder, inventory, uid)
{
    std::cout << Name() << " the necromancer has entered the battle" << std::endl;
}



void Necromancer::BoneSpike(Entity *target)
{
    Attack(target, GetIntelligence() * 1.0, "BoneSpike");
}

void Necromancer::LifeDrain(Entity *target)
{
    Attack(target, GetWisdom() * 1.0, "Magic Missile");
    Heal(this, GetWisdom() * 0.2, "Magic Missle");
}

void Necromancer::OutputStatus() const
{
    std::cout << Class() << ": " << this->Name()
                << "\n\tCurrent HP: " << this->CurrentHP()
                << "\n\tIntelligence: " << this->GetIntelligence()
                << std::endl;

    PrintInventory();
}

void Necromancer::WeaponAttack(Entity * target)
{
    Attack(target, 4.0, "Staff Attack");
}

void Necromancer::UseAction(Entity * target, const std::string& spellName, const std::string & args)
{
    if(spellName == "weapon_attack")
    {
        WeaponAttack(target);
        return;
    }
    if(spellName == "bone_spike")
    {
        BoneSpike(target);
        return;
    }
    if(spellName == "life_drain")
    {
        LifeDrain(target);
        return;
    }
    errorFindingAbility(spellName);
}