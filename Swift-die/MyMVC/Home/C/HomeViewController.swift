

//
//  HomeViewController.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/23.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

class HomeViewController: UIViewController,BMKMapViewDelegate {
    var _mapView : BMKMapView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        _mapView = BMKMapView(frame: self.view.bounds)
        self.view = _mapView
        _mapView?.zoomLevel = 14
        
        let coordinate = CLLocationCoordinate2DMake(39.90, 116.397)
        _mapView?.setCenterCoordinate(coordinate, animated: true)

//        创建搜索按钮
        self.createSubViews()
        
    }
    
    func createSubViews() {
    let bgView = UIView(frame: CGRectMake(15, 25, kWidth-30, 45))
        bgView.backgroundColor = UIColor.whiteColor()
        bgView.layer.shadowOpacity = 0.8
        bgView.layer.cornerRadius = 3
        bgView.layer.shadowOffset = CGSizeMake(2, 2)
        bgView.layer.shadowRadius = 2
        bgView.layer.shadowColor = UIColor.grayColor().CGColor
        self.view.addSubview(bgView)
        
    let searchImageView = UIImageView(frame: CGRectMake(14, 13, 18, 19))
        searchImageView.image = UIImage(named: "search-拷贝-2")
        bgView.addSubview(searchImageView)
        
    let lineView = UIView(frame: CGRectMake(45, 10, 0.6, 25))
        lineView.backgroundColor = UIColor.lightGrayColor()
        bgView.addSubview(lineView)

    let searchLabel = UILabel(frame: CGRectMake(59, 10, kWidth-30-50*2, 25))
        searchLabel.font = UIFont.systemFontOfSize(16)
        searchLabel.text = "搜北京市商铺或场地"
        searchLabel.textColor = UIColor.grayColor()
        bgView.addSubview(searchLabel)
        
        
    let searchBtn = UIButton(type: .Custom)
        searchBtn.frame = bgView.frame
        self.view.addSubview(searchBtn)
        searchBtn.addTarget(self, action: "search", forControlEvents: .TouchUpInside)
        
        
    }
    
    
    func search() {
        let buildListVC = BuildListViewController()
        self.navigationController?.pushViewController(buildListVC, animated: true)
    
    }
    
    
//    MARK: - view生命周期
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        self.navigationController?.navigationBar.hidden = true
        _mapView?.delegate = self
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        _mapView?.delegate = nil
        self.navigationController?.navigationBar.hidden = false
    }
    
    
//    MARK: - BMKMapViewDelegate
   
    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
