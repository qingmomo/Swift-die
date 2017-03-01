//
//  Common.swift
//  SwiftTool
//
//  Created by 黎仕仪 on 17/2/21.
//  Copyright © 2017年 黎仕仪. All rights reserved.
//

import Foundation
import UIKit

func RGB(r:CGFloat,g:CGFloat,b:CGFloat)->UIColor{
return UIColor(red: r/255.0, green: g/255.0, blue: b/255.0, alpha: 1.0)
}

public let kWidth  = UIScreen.mainScreen().bounds.size.width
public let kHeight = UIScreen.mainScreen().bounds.size.height

public let bgColor = UIColor(red: 0.95, green: 0.95, blue: 0.95, alpha: 1)
