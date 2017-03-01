//
//  BaseTabBarController.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/23.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

class BaseTabBarController: UITabBarController {
    
    var normalArr : NSArray?
    var selectArr : NSArray?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        self.createSubViewControllers()
//        self.createTabBar()
    }

//    MARK:创建子控制器
    func createSubViewControllers() {
        let homeVC     = HomeViewController()
        let activityVC = ActivityViewController()
        let mineVC     = MineViewController()
        
        let homeNaviVC = BaseNavigationController(rootViewController:homeVC)
        let actNaviVC  = BaseNavigationController(rootViewController: activityVC)
        let mineNaviVC = BaseNavigationController(rootViewController: mineVC)
        
        self.addChildViewController(homeNaviVC)
//        self.addChildViewController(homeVC)
        self.addChildViewController(actNaviVC)
        self.addChildViewController(mineNaviVC)
    
    }
    
    override func viewWillLayoutSubviews() {
        self.createTabBar()
    }
    
//    MARK: 创建tabBar
    func createTabBar() {
        for view in self.tabBar.subviews{
            view.removeFromSuperview()
        }
        
        self.tabBar.backgroundColor = UIColor(red: 0.98, green: 0.98, blue: 0.98, alpha: 1)
        
        
        let titles = ["首页","活动","我的"]
        normalArr  = ["首页-(5)","活动-(2)","我的"]
        selectArr  = ["首页选中","活动选中","我的选中"]
        
        for (var i=0;i<3;i++){
        let tabBarBtn = TabBarButton(frame: CGRectMake(kWidth/3*CGFloat(i), 0, kWidth/3, 49))
            if i==0{
            tabBarBtn.btnImgView?.image = UIImage(named: selectArr![i] as! String)
            }else{
            tabBarBtn.btnImgView?.image = UIImage(named: normalArr![i] as! String)
            }
            tabBarBtn.btnTitleLabel?.text = titles[i]
//            tabBarBtn.addTarget(self, action: "btnAction:" , forControlEvents: .TouchUpInside)
            tabBarBtn.addTarget(self, action: "btnAction:", forControlEvents: .TouchUpInside)
            tabBarBtn.tag = 100+i
            self.tabBar.addSubview(tabBarBtn)
        }
    }

    
    func btnAction(btn : TabBarButton) {
        self.selectedIndex = btn.tag - 100
        
        for tabBarBtn in self.tabBar.subviews{
            if tabBarBtn.isMemberOfClass(TabBarButton){
                let tabBtn = tabBarBtn as! TabBarButton
                let i = tabBtn.tag - 100
                tabBtn.btnImgView?.image = UIImage(named: normalArr![i] as! String)
            }
        }
        
        btn.btnImgView?.image = UIImage(named: selectArr![btn.tag-100] as! String)
        
    }
    
    

}
