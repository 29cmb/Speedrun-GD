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
			TowerLabel->setPosition(-96, -27)

			mainMenu->addChild(TowerLabel);
		}

		return true;
	}
};
