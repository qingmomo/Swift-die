//
//  INNSMap_ServicesLocationAndNavigationHttpData.h
//  IndoorLocationTest
//
//  Created by lj on 16/4/7.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INNSMap_ReturnInfo.h"

@protocol ServicesLocationAndNavigationHttpDataDelegate <NSObject>
/*!
 *  返回定位的所有信息
 *  @param returnInfo 具体信息.(信息码,信息详情,如果错误返回则ISM_LocationInfo为空)
 */
-(void)INNSMap_LocationReturnInfo:(INNSMap_ReturnInfo *)returnInfo;

@end

@interface INNSMap_ServicesLocationAndNavigationHttpData : NSObject

typedef struct beacon_data
{
    int major ;
    int minor;
    short txPower ;
    float rssi;
} beacon_data;


/*!定位代理*/
@property (nonatomic,weak)id<ServicesLocationAndNavigationHttpDataDelegate>ism_delegate;

/*!请求定位*/
-(void)requestLocationInfo;

/*!停止定位*/
-(void)stopLocation;



@end
