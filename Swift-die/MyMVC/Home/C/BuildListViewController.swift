//
//  BuildListViewController.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/27.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

class BuildListViewController: UIViewController,UITableViewDelegate,UITableViewDataSource {

    var buildListTableView : UITableView?
    var buListArray        : NSMutableArray?
    var buIdBuNameDic      : NSMutableDictionary?
    var buildNameArray     : [String]?
    var sectionDataArray   : NSMutableArray?
    var rowDataArray       : NSMutableArray?
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationController?.navigationBar.hidden = false
        self.view.backgroundColor = UIColor.whiteColor()
        let item = self.navigationController?.navigationBar.topItem
        item!.title = "返回"
        self.navigationController!.navigationBar.tintColor = UIColor.blackColor()
        
        buListArray      = NSMutableArray()
        buIdBuNameDic    = NSMutableDictionary()
//        buildNameArray = NSMutableArray()
        buildNameArray   = [String]()
        sectionDataArray = NSMutableArray()
        rowDataArray     = NSMutableArray()

        self.createSubViewsAndLoadData()

    }
    
    func createSubViewsAndLoadData() {
        buildListTableView = UITableView(frame: self.view.bounds, style: .Grouped)
        buildListTableView?.delegate = self
        buildListTableView?.dataSource = self
        buildListTableView?.tableFooterView = UIView(frame: CGRectZero)
        self.view.addSubview(buildListTableView!)
        
        let res = INNSMap_ServicesResourceData()
        res.INNSMap_getCityBuildingListWithCountryID(86, withCityID: 103, success: { (buildListArr) -> Void in
            self.buListArray = buildListArr
            
            for (var i=0;i<buildListArr.count;i++){
            let cityBuild = buildListArr[i] as! CityBuilding
            let buildName = cityBuild.buildingNameStr
            let buildId   = cityBuild.buildingCodeStr
                
                self.buIdBuNameDic?.setObject(buildId, forKey: buildName)
//                self.buildNameArray?.addObject(buildName)
                self.buildNameArray?.append(buildName)
            }
            
            self.sectionDataArray = ChineseString.IndexArray(self.buildNameArray)
            self.rowDataArray     = ChineseString.LetterSortArray(self.buildNameArray)
            
            dispatch_async(dispatch_get_main_queue(), { () -> Void in
                self.buildListTableView?.reloadData()
            })
            
            
            }) { (error) -> Void in
                print(error)
        }
        
    }

//    MARK : - TableView代理和数据源

    @available(iOS 2.0, *)
    func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return (sectionDataArray?.count)!
    }
    
    @available(iOS 2.0, *)
    internal func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell{
        let identifier = "myCell"
        var cell = tableView.dequeueReusableCellWithIdentifier(identifier)
        if ((cell == nil)){
        cell = UITableViewCell(style: .Default, reuseIdentifier: identifier)
        }
        
        let rowArr = rowDataArray![indexPath.section]
        
        cell?.textLabel?.text = rowArr[indexPath.row] as? String
        cell?.textLabel?.textAlignment = .Center
        
        return cell!
    }

    internal func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int{
        return rowDataArray![section].count
    }
    
    func sectionIndexTitlesForTableView(tableView: UITableView) -> [String]? {
        buildListTableView?.sectionIndexBackgroundColor = UIColor.clearColor()
        buildListTableView?.sectionIndexColor = UIColor.grayColor()
        let strArr = sectionDataArray! as NSArray as! [String]
        return strArr
    }
    
    func tableView(tableView: UITableView, heightForRowAtIndexPath indexPath: NSIndexPath) -> CGFloat {
        return 50
    }
    
    func tableView(tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        let view = UIView(frame: CGRectMake(0, 0, kWidth, 30))
        
        let label = UILabel(frame: view.frame)
        label.text = sectionDataArray![section] as? String
        label.textColor = UIColor.grayColor()
        label.font = UIFont.systemFontOfSize(16)
        label.textAlignment = .Center
        view.addSubview(label)
        
        return view;
    }
    
    func tableView(tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 30
    }
    
    func tableView(tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
        return 0.0000001
    }
   
    func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        let rowArr = rowDataArray![indexPath.section]
        let buildName = rowArr[indexPath.row] as? String
        let buildId   = buIdBuNameDic![buildName!] as? String
        
        let buildVC       = BuildViewController()
        buildVC.buildId   = buildId
        buildVC.buildName = buildName
        self.navigationController?.pushViewController(buildVC, animated: true)
        
    }
    
    
    
}
