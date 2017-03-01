//
//  INNSMap_LocationInfo.h
//  IndoorLocationTest
//
//  Created by lj on 16/4/15.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface INNSMap_LocationInfo : NSObject

/*! 楼宇ID */
@property (nonatomic,strong)NSString *buildingID;

/*! 楼层ID */
@property (nonatomic,strong)NSString *floorID;

/*! 位置坐标 */
@property (nonatomic,assign)CGPoint locationPoint;

@end
