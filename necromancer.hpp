#ifndef NECROMANCER_HPP
#define NECROMANCER_HPP


#include "JsonEntityBuilder.hpp"
#include "entity.hpp"

class Necromancer : public Entity
{
private:
    void BoneSpike(Entity * target);
    void LifeDrain(Entity * target);

public:

    Necromancer(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid);

    virtual void OutputStatus() const override;
    virtual void WeaponAttack(Entity * target) override;

    virtual void UseAction(Entity * target, const std::string& spellName, const std::string & args) override;
};


#endif