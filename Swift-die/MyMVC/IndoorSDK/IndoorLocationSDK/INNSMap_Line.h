//
//  INLine.h
//  IndoorLocationTest
//
//  Created by ylf on 16/3/15.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import "INNSMap_Overlay.h"
#import "INGeometry.h"

@interface INNSMap_Line : INNSMap_Overlay

@property (nonatomic, strong)NSMutableArray *pointArr;  //判断点在线上做的数组
/*! 画轮廓图或平面图的点的集合 */
@property (nonatomic, assign) ISM_MAP_POINT     *point;

/*! 所画的图形的路径 */
@property (nonatomic, assign) CGMutablePathRef  linePath;

/*! 样式 */
@property (nonatomic, assign) NSInteger         planeType;

/*! 线型（1:实线;2:点划虚线;3:线划虚线;）*/
@property (nonatomic, assign) NSInteger         lineStyle;

/*! 点击选中时的POI 的 Id */
@property (nonatomic, assign) NSInteger         poiId;

/*!
 *   INLine对应的初始化方法
 *  @param pointArray 点(地图)的坐标的数组
 *  @param num        点的数量
 *  @return INLine对象
 */
- (instancetype)initWithINLinePoints:(ISM_MAP_POINT *)pointArray pointNum:(int)num;

/*!更新线的路径，即更新平面图*/
- (void)updateLinePath;

/*! 图例ID */
@property(nonatomic,assign)int tuliID;

/*! 图例图片 */
@property(nonatomic,strong)UIImage *tuliImage;

/*! 图例在地图上的坐标点 */
@property(nonatomic,assign)ISM_MAP_POINT tuliPoint;

/*!
 *   图例对应的初始化方法
 *  @param tuli_point   图例在地图上的坐标点
 *  @param image        图例图片
 *  @return INLine对象（图例对象）
 */
- (instancetype)initWithINLinePoint:(ISM_MAP_POINT)tuli_point withImage:(UIImage *)image;


@end
