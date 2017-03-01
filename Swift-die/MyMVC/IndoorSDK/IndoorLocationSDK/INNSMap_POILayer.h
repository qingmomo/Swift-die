//
//  POILayer.h
//  IndoorLocationTest
//
//  Created by ylf on 16/3/18.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "ISM_GetServiceRes_Interfaces.h"
#import "INNSMap_POI.h"


@interface INNSMap_POILayer : CALayer
{
    @public
    int map_styles;
}

/*! 地图相应矩阵的变化 */
@property (nonatomic, assign) CGAffineTransform   transform_2D;

/*!存储从服务器获取的所有POI的字典*/
@property (nonatomic, strong) NSMutableDictionary *poiDic;

/*! 存储POI的点，可以根据记录ID查找(要画的) */
@property (nonatomic, strong) NSMutableDictionary *poi_MDic;

/*! 点击选中POI时的POI的Id */
@property (nonatomic, assign) NSInteger  poiId;

/*! poi id数组 */
@property (nonatomic, strong) NSArray *poi_id_array;

/*! 配色方案 */
@property (nonatomic, strong) MapStyle   *MapStyleData;

/*! 第一次调用绘制*/
- (void)draw_POI_titleOld;

/*! 绘制POI图层上的标题 */
- (void)draw_POI_title;

/*! 更新POI图层上的标题 */
- (void)updata_POI_title;

/*! 保证标题颜色的正常状态 */
- (void)makeSurePoiNormalColor;


@end





