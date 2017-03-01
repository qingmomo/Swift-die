//
//  INImage.h
//  IndoorLocationTest
//
//  Created by ylf on 16/3/24.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import "INNSMap_Overlay.h"

@interface INNSMap_Image : INNSMap_Overlay
/*!
 *  添加图像的初始化方法
 *
 *  @param imageName    图像的名称
 *  @param type         图像的类型
 *  @param point        图像所在位置对应的初始点
 *  @param AnchorPoint  锚点,如果x,y不在0~1范围内，还是以默认锚点(0.5,0.5)计算
 *  @return INImage对象
 */
- (instancetype)initWithINImage:(UIImage *)image withInPoint:(ISM_MAP_POINT)point withAnchorPoint:(CGPoint)anchorPoint;


@end
