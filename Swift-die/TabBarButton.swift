//
//  TabBarButton.swift
//  Swift-die
//
//  Created by 黎仕仪 on 17/2/24.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import UIKit

class TabBarButton: UIButton {

    var btnImgView    : UIImageView?
    var btnTitleLabel : UILabel?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        btnImgView = UIImageView(frame: CGRectMake((kWidth/3-24)/2, 6, 23, 23))
//        btnImgView?.image =
        self.addSubview(btnImgView!)
        
        btnTitleLabel = UILabel(frame: CGRectMake(0, 31, kWidth/3, 15))
        btnTitleLabel?.textAlignment = .Center
        btnTitleLabel?.font = UIFont.systemFontOfSize(13)
        self.addSubview(btnTitleLabel!)
        
        
    }

    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    

}
