#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/LevelAreaInnerLayer.hpp>
class $modify(LevelAreaInnerLayer) {
	bool init(bool p0){
		if(!LevelAreaInnerLayer::init(p0)) return false;

		auto mainMenu = this->getChildByID("main-node");

		if(mainMenu){
			auto TowerLabel = CCLabelBMFont::create("Time", "bigFont.fnt");
			TowerLabel->setZOrder(2);
			TowerLabel->setScale(0.625);
			TowerLabel->setPosition(-96, -27);

			auto SewersLabel = CCLabelBMFont::create("Time", "bigFont.fnt");
			SewersLabel->setZOrder(2);
			SewersLabel->setScale(0.625);
			SewersLabel->setPosition(103, 28);

			auto CellarLabel = CCLabelBMFont::create("Time", "bigFont.fnt");
			CellarLabel->setZOrder(2);
			CellarLabel->setScale(0.625);
			CellarLabel->setPosition(-96, 81);

			auto SecretHollowLabel = CCLabelBMFont::create("Time", "bigFont.fnt");
			SecretHollowLabel->setZOrder(2);
			SecretHollowLabel->setScale(0.625);
			SecretHollowLabel->setPosition(114, 81);

			mainMenu->addChild(TowerLabel); 
			mainMenu->addChild(SewersLabel);
			mainMenu->addChild(CellarLabel);
			mainMenu->addChild(SecretHollowLabel);
		}

		return true;
	}
};
