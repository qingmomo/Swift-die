//
//  INPoint.h
//  IndoorLocationTest
//
//  Created by ylf on 16/3/23.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import "INNSMap_Overlay.h"
#import "INGeometry.h"

@interface INNSMap_Point : INNSMap_Overlay
{
    @public
    CGMutablePathRef pointPath; // 绘画点所对应的路径
}

/*! 点的半径 */
@property (nonatomic, assign) CGFloat  pointRadius;

/*!
 *  添加点的初始化方法
 *  @param point     添加的点对应的位置
 *  @return INPoint对象本身
 */
- (instancetype)initWithINPoint:(ISM_MAP_POINT)point;



@end
