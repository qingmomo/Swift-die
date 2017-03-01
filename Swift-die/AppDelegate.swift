//
//  AppDelegate.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/23.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?


    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {

        self.window?.backgroundColor    = UIColor.whiteColor()
        let baseTabBarC                 = BaseTabBarController()
        self.window?.rootViewController = baseTabBarC
        
//        百度
        let bdMapManager = BMKMapManager()
        let ret = bdMapManager.start("QdUqaCkmPZ93tc5vntZ8WDENmQuC3Aoh", generalDelegate: nil)
        if !ret {
            print("百度地图初始化失败")
        }
        
//        室内SDK
        let res = INNSMap_ServicesAuthorizationVerificationData()
        res.INNSMap_RegisterSDKWithAppKey("0A34117FB6686014", success: { (INNSMap_ReturnInfo) -> Void in
                print("室内SDK初始化成功")
            }) { (error) -> Void in
                print(error)
        }
        
        
        
        return true
    }

    func applicationWillResignActive(application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
    }

    func applicationDidEnterBackground(application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }

    func applicationWillEnterForeground(application: UIApplication) {
        // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    }

    func applicationDidBecomeActive(application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }

    func applicationWillTerminate(application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }


}

