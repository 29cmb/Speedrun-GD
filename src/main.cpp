#include <Geode/Geode.hpp>
#include <Geode/utils/web.hpp>
#include <matjson.hpp>

using namespace geode::prelude;

#include <Geode/modify/LevelAreaInnerLayer.hpp>

class $modify(SpeedrunRequests, LevelAreaInnerLayer) {
	struct Fields {
        EventListener<web::WebTask> m_listener;
    };

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

            // Make the web request and update the label text
            // getSpeedrunInformation("xd1emmyw", [SecretHollowLabel](const std::string& time){
            //     SecretHollowLabel->setString(time.c_str());
            // });
        }

        return true;
    }
    
    // void getSpeedrunInformation(const std::string& levelID, std::function<void(const std::string&)> callback){
    //     auto req = web::WebRequest();
    //     req.get(std::format("https://www.speedrun.com/api/v1/leaderboards/o6gxkxd2/level/{}/rkl8rl82", levelID))
    // }
};
