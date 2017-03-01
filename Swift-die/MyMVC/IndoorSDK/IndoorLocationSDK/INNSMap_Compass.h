//
//  INCompass.h
//  IndoorLocationTest
//
//  Created by ylf on 16/3/31.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import "INNSMap_Overlay.h"

@interface INNSMap_Compass : INNSMap_Overlay

/*! 是否显示指北针 (默认显示)*/
@property (nonatomic, assign) BOOL    showCompass;

/*! 指北针实时的旋转角度(是弧度)（默认为零）*/
@property (nonatomic, assign) CGFloat rotateAngle;

/*! 指北针的图片 */
@property (nonatomic, strong) UIImage *image;

@end
