//
//  ISM_Overlay.h
//  IndoorLocationTest
//
//  Created by ylf on 16/4/5.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INNSMap_Annotation.h"
#import "INGeometry.h"


@protocol INNSMap_Overlay <INNSMap_Annotation>

@optional

/*! 对象本身对应的原始点的坐标 */
@property (nonatomic, assign) ISM_MAP_POINT addPoint;

@end



@interface INNSMap_Overlay : CALayer<INNSMap_Overlay>

/*! 覆盖物描边色 */
@property (nonatomic, strong) UIColor   *strokeColor;

/*! 覆盖物填充色 */
@property (nonatomic, strong) UIColor   *fillColor;

/*! 线条宽度 */
@property (nonatomic, assign) CGFloat   lineWidth;

/*! 透明度 */
@property (nonatomic, assign) CGFloat   alpha;

/*! 图形上的点对应的矩阵的变化 */
@property (nonatomic, assign) CGAffineTransform transform_2D;

/*! 对象本身对应的原始点的坐标 */
@property (nonatomic, assign) ISM_MAP_POINT addPoint;

@end








