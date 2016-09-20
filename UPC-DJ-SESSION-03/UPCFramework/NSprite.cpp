#include "NSprite.h"

#include "NFramework.h"

NSprite::NSprite()
{
}

NSprite::~NSprite()
{
}

void NSprite::Initialize(const std::string path)
{
	NFramework* framework = NFramework::GET_FRAMEWORK();
	NContentManagment* contentManagment = framework->GetContentManagment();
	NImageContent* content = (NImageContent*)contentManagment->LoadAndGetContent<NImageContent>("Resources/sprites/AngryCloud.png");
}

void NSprite::Update(float dt)
{
}

void NSprite::Draw(float dt)
{
}
