//
//  INMapOptions.h
//  IndoorLocationTest
//
//  Created by ylf on 16/4/1.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "INNSMap_MapView.h"

@interface INNSMap_MapOptions : NSObject

/*! 初始化 init方法 */
- (instancetype)init;

/*! 初始化 构造器方法 */
+ (INNSMap_MapOptions *)inMapOptions;

/*! 设置轻拍手势是否能用，默认是YES */
- (void)setTapGestureEnabled:(BOOL)flag;

/*! 设置平移手势是否能用，默认是YES */
- (void)setPanGestureEnabled:(BOOL)flag;

/*! 设置旋转手势是否能用，默认是YES */
- (void)setRotationGestureEnabled:(BOOL)flag;

/*! 设置捏合手势是否能用，默认是YES */
- (void)setPinchGestureEnabled:(BOOL)flag;

/*! 设置长按手势是否能用，默认是YES */
- (void)setLongPressGestureEnabled:(BOOL)flag;


@end
