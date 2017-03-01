//
//  INNSMap_ReturnInfo.h
//  test
//
//  Created by lj on 16/4/15.
//  Copyright © 2016年 lj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "INNSMap_LocationInfo.h"

@interface INNSMap_ReturnInfo : NSObject

/*! 错误代码 */
@property (nonatomic,assign)int code;

/*! 错误原因 */
@property (nonatomic,strong)NSString *message;

/*! 位置信息 */
@property (nonatomic,strong)INNSMap_LocationInfo *locationInfo;

@end
