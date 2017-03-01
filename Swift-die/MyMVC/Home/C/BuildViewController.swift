//
//  BuildViewController.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/27.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

class BuildViewController: UIViewController {

    var buildId   : String?
    var buildName : String?
    var inMapView : INNSMap_MapView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = UIColor.whiteColor()
        let item = self.navigationController?.navigationBar.topItem
        item!.title = "返回"
        self.title = buildName! + "F1"
        

        self.createSubViews()
    }

    func createSubViews() {
        inMapView = INNSMap_MapView(frame: CGRectMake(0, 64, kWidth, kHeight-64))
        self.view.addSubview(inMapView!)
    
        let res = INNSMap_ServicesResourceData()
        res.INNSMap_getBuildingPropertyWithBuildingID(buildId, success: { (BuildingProperty) -> Void in
            if (BuildingProperty.OvergroundCnt != 0){
            let overMap = BuildingProperty.OvergroundFloorArray[0] as? OvergroundFloorObj
                
                let floorId = overMap?.floorId
                
                dispatch_async(dispatch_get_main_queue(), { () -> Void in
                    
                    self.inMapView?.loadMapViewWithBuildID(self.buildId, withFloorID: floorId, success: { () -> Void in
                        
                        
                        }, failure: { (error) -> Void in
                            print(error)
                    })
                    
                    
                })
                
            }
            
            
            }) { (error) -> Void in
                print(error)
        }
        
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        self.tabBarController!.tabBar.hidden = true
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        self.tabBarController?.tabBar.hidden = false
    }
    
}
