//
//  ServicesResourceData.h
//  IndoorLocationTest
//
//  Created by su on 16/3/16.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*! 获取授权城市列表返回数据类*/
@interface CityProperty : NSObject
@property (nonatomic, assign)int regionId;             //地区id
@property (nonatomic, strong)NSString *regionName;     //地区名称
@property (nonatomic, assign)float longi;              //经度
@property (nonatomic, assign)float lati;               //纬度
@property (nonatomic, strong)NSString *nameStr;        //拼音
@end

/*!
 获取建筑属性返回数据类
 */
@interface BuildingProperty : NSObject
@property (nonatomic, strong)NSString *buildAddr;           //楼宇地址
@property (nonatomic, strong)NSString *provinceName;        //省
@property (nonatomic, strong)NSString *cityName;            //市
@property (nonatomic, strong)NSString *countyName;          //县
@property (nonatomic, strong)NSString *buildNameCn;         //楼宇中文名
@property (nonatomic, strong)NSString*BuildingID;           //楼宇ID
@property (nonatomic, assign)int FloorCnt;                  //楼层数
@property (nonatomic, assign)int DefaultFloor;              //默认层号
@property (nonatomic, assign)int OvergroundCnt;             //地上几层
//数组里存放的是OvergroundFloorObj对象
@property (nonatomic, strong)NSMutableArray *OvergroundFloorArray;
@property (nonatomic, assign)int UndergroundCnt;            //地下几层
//数组里存放的是UndergroundFloorObj对象
@property (nonatomic, strong)NSMutableArray *UndergroundFloorArray;
@end


/*!
 获取建筑属性地上楼层返回数据类
 */
@interface  OvergroundFloorObj: NSObject
@property (nonatomic, strong)NSString*floorId;               //楼层ID	String	32
@property (nonatomic, assign)int overgroundCnt;              //地上楼层数	integer	4
@property (nonatomic, copy)NSString *overgroundFloorName;    //默认层号	integer	4
@property (nonatomic, assign)int overgroundFloorNum;         //地上第几层	integer	-
@end

/*!
 获取建筑属性地下楼层返回数据类
 */
@interface  UndergroundFloorObj: NSObject
@property (nonatomic, strong)NSString*floorId;                 //楼宇ID
@property (nonatomic, assign)int undergroundCnt;               //地下楼层数
@property (nonatomic, copy)NSString *undergroundFloorName;     //默认层号
@property (nonatomic, assign)int undergroundFloorNum;          //地下第几层
@end


/*!
 获取城市建筑列表信息返回数据类
 */
@interface CityBuilding : NSObject
@property (nonatomic, strong)NSString* buildingCodeStr;   //建筑code
@property (nonatomic, strong)NSString* buildingNameStr;   //建筑名称
@property (nonatomic, strong)NSString* buildingFlagStr;   //建筑标志
@property (nonatomic, assign)float longitudeNumber ;      //经度
@property (nonatomic, assign)float  latitudeNumber;       //纬度
@end




/*!
 获取POI详情返回的类对象返回数据类
 */
@interface PoiDetail : NSObject
@property (nonatomic, strong)NSString* remark;       //备注
@property (nonatomic, strong)NSString* address;      //地址
@property (nonatomic, strong)NSString* POI_Name;     //名称
@property (nonatomic, strong)NSString* POI_Tel;	     //电话
@property (nonatomic, strong)NSString* POI_LogoUrl;  //LOGO
@property (nonatomic, strong)NSString* POI_InfoText; //简介
@property (nonatomic, copy)NSString* poiBigtype;     //大类名
@property (nonatomic, copy)NSString* poiSmalltype;   //小类名
@end

/*!
 获取POI搜索返回的结果返回数据类
 */
@interface PoiSearch : NSObject
@property (nonatomic, assign)int       PoiId;           //Poi标识符
@property (nonatomic, strong)NSString* PoiName;         //Poi名称
@property (nonatomic, strong)NSString* PoiBuildingId;   //Poi所属楼宇
@property (nonatomic, assign)int       floorNum;        //楼层当前层数
@property (nonatomic, strong)NSString* BuildingName;    //楼名
@property (nonatomic, strong)NSString* PoiFloorId;      //Poi所属楼层
@property (nonatomic, strong)NSString* Floor_name;      //楼层名称
@property (nonatomic, strong)NSString* photoPath;       //POI图片地址
@property (nonatomic, assign)float poiCenter_x;         //poi中心点x坐标
@property (nonatomic, assign)float poiCenter_y;         //poi中心点y坐标
@end


/*!
 获取POI分类的列表属性返回数据类
 */
@interface PoiCategoriesList : NSObject
@property (nonatomic, assign)int  bigCount;             //大类数
@property (nonatomic, strong)NSArray* bigTypeNameArr;   //大类类型
@property (nonatomic, strong)NSArray* bigSmallTypeArr;  //大类中所有小类类型集合
//@property (nonatomic, assign)int  smallCount;   //细类数
//@property (nonatomic, strong)NSArray* smallTypeArr;  //细类类型
@end

///*
// 获取POI分类的列表属性---大类属性
// */
//@interface BigTypeObj : NSObject
//
//@property (nonatomic, copy)NSString *bigTypeName;
//@property (nonatomic, strong)NSArray *smallTypeArr;
//
//@end

/*!
 获取POI分类的列表属性---小类属性
 */
@interface SmallTypeObj : NSObject

@property (nonatomic, copy)NSString *typeName;          //小类类型
@property (nonatomic, copy)NSString *belongBigType;     //属于的大类

@end

/*!
 查周边返回周边POI类
 */
@interface PeripheryPOI : NSObject

@property (nonatomic, assign)int distance;               //距离
@property (nonatomic, assign)int nodeID;                 //PeripheryPOIID
@property (nonatomic, assign)CGPoint peripheryPoint;     //位置点

@end

/*!
 查周边返回周边设施类
 */
@interface PeripheryFacility : NSObject
@property (nonatomic, assign)int distance;               //距离
@property (nonatomic, assign)int nodeID;                 //PeripheryPOIID
@property (nonatomic, assign)CGPoint peripheryPoint;     //位置点
@end


/*!
 查公共设施返回公共设施类
 */
@interface CommunalFacility : NSObject
@property (nonatomic, assign)int comFacID;               //公共设施ID
@property (nonatomic, assign)CGPoint comFacPoint;        //位置点
@end

/*!位置共享返回数据类 */
@interface MultiShareObj : NSObject
@property (nonatomic, copy)NSString *buildId;             //楼宇ID
@property (nonatomic, copy)NSString *floorId;             //楼层ID
@property (nonatomic, copy)NSString *userid;              //用户ID
@property (nonatomic, assign)CGPoint positionPoint;       //用户位置点
@end


/*!
 获取访问资源接口
 */
@interface INNSMap_ServicesResourceData : NSObject

/*! 获取授权城市列表接口函数，返回数据存放在buildingMutableArr
 @return cityMutableArr       存城市的数组
 @return error                失败的错误信息
 */
//success:(void(^)(void))success
-(void)INNSMap_getAuthorizedCityListWithSuccess:(void(^)(NSMutableArray *cityMutableArr))success failure:(void(^)(NSString *error))failure;


/*! 获取城市建筑列表接口函数，返回数据存放在buildingMutableArr
 @param  countryID            国家码
 @param  cityId               城市码
 @return buildingMutableArr   存城市建筑的数组
 @return error                失败的错误信息
 */
-(void)INNSMap_getCityBuildingListWithCountryID:(int)countryID withCityID:(int)cityId success:(void(^)(NSMutableArray *buildingMutableArr))success failure:(void(^)(NSString *error))failure;


/*! 获取建筑属性接口函数，返回数据存放在buildingPropertyObj
 @param  buildingID           建筑ID
 @return buildingPropertyObj  建筑属性类
 @return error                失败的错误信息
 */
-(void)INNSMap_getBuildingPropertyWithBuildingID:(NSString *)buildingID success:(void (^)(BuildingProperty *buildingPropertyObj))success failure:(void(^)(NSString *error))failure;


/*! POI楼宇范围内检索接口函数，返回数据存放在poiSearchArr
 @param  buildingID           建筑ID
 @param  POI_Name             POI名称
 @return poiSearchArr         查到的POI数组
 @return error                失败的错误信息
 */
-(void)INNSMap_POISearchBuildingWithBuildID:(NSString*)buildingID withPOI_Name:(NSString*)POI_Name success:(void(^)(NSMutableArray * poiSearchArr))success failure:(void(^)(NSString *error))failure;


/*! POI检索城市范围内接口函数，返回数据存放在poiSearchArr
 @param  cityId               城市ID
 @param  POI_Name             POI名称
 @return poiSearchArr         查到的POI数组
 @return error                失败的错误信息
 */
-(void)INNSMap_POISearchCityWithCityID:(int)cityId withPOI_Name:(NSString *)POI_Name success:(void(^)(NSMutableArray * poiSearchArr))success failure:(void(^)(NSString *error))failure;


/*! 获取POI详情接口函数，返回数据存放在PoiDetailObj
 @param  POI_ID               POI的ID
 @param  buildingID           建筑ID
 @param  floorID              楼层ID
 @return PoiDetailObj         POI详情类
 @return error                失败的错误信息
 */
-(void)INNSMap_getPOIPropertyWithPOI_ID:(int)POI_ID withBuildID:(NSString*)buildingID withFloorID:(NSString*)floorID success:(void(^)(PoiDetail* PoiDetailObj))success failure:(void(^)(NSString *error))failure;


/*! 获取路径请求接口函数，返回数据存放在SearchPathObj
 @param  buildID              建筑ID
 @param  startFloorID         起始楼层ID
 @param  startPOIID           起始POI_ID
 @param  startPoint           起始点
 @param  endFloorID           终点楼层ID
 @param  endPOIID             终点POI_ID
 @param  endPoint             终点
 @return SearchPathDic        查到的路径信息
 @return error                失败的错误信息
 */
-(void)INNSMap_getPathRequestWithBuildID:(NSString*)buildID withStartFloorID:(NSString*)startFloorID withStartPOIID:(int)startPOIID withStartPoint:(CGPoint)startPoint withEndFloorID:(NSString*)endFloorID withEndPOIID:(int)endPOIID withEndPoint:(CGPoint)endPoint success:(void(^)(NSMutableDictionary *SearchPathDic))success failure:(void(^)(NSString *error))failure;


/*! 获取城市POI分类的列表
 @param  cityId               城市ID
 @return poiCategoriesList    POI的分类类
 @return error                失败的错误信息
 */
-(void)INNSMap_getPOICategoriesWithCityID:(int)cityId success:(void (^)(PoiCategoriesList *poiCategoriesList))success failure:(void(^)(NSString *error))failure;


/*! 获取周边 （多于5个返回5个）
 @param  buildid              建筑ID
 @param  startFloorID         楼层ID
 @param  poiID                POI_ID
 @param  startPoint           起始点
 @param  requestTpye          查找类型  1:商铺  2:卫生间  3:楼梯  4:出口  5:电梯
 @return peripheryArray       查找到周边的数组
 @return error                失败的错误信息
 */
-(void)INNSMap_getPeripheryWithBuildID:(NSString*)buildid withStartFloorID:(NSString*)startFloorID withStartPOIID:(int)poiID withStartPoint:(CGPoint)startPoint withRequestTpye:(int)requestTpye success:(void (^)(NSMutableArray *peripheryArray))success failure:(void(^)(NSString *error))failure;


/*! 查公共设施
 @param  buildid                 建筑ID
 @param  floorID                 楼层ID
 @param  requestTpye             查找类型   1:卫生间  2:楼梯  4:电梯  5:出入口  6:扶梯
 31:吸烟区  32:收银台  33:服务台  34:atm  36:问讯处  37:饮水处
 @return CommunalFacilityArray   查找到公共设施的数组
 @return error                   失败的错误信息
 */
-(void)INNSMap_getCommunalFacilitiesWithbuildID:(NSString*)buildid withFloorID:(NSString*)floorID withRequestTpye:(int)requestTpye success:(void (^)(NSMutableArray *CommunalFacilityArray))success failure:(void(^)(NSString *error))failure;


/*! 位置分享
 @param  buildid              建筑ID
 @param  floorID              楼层ID
 @param  positionType         位置类型	1:为定位点  2:标记点
 @param  positionPoint        位置点坐标
 @param  description          用户自定义的描述信息
 @return locationDic          位置的相关信息，存储为一个字典
 @return error                失败的错误信息
 */
-(void)INNSMap_sharingTheLocationWithBuildingId:(NSString *)buildingId WithFloorId:(NSString *)floorId withPositionType:(int)positionType withPositionPoint:(CGPoint)positionPoint WithDescription:(NSString*)description success:(void (^)(NSMutableDictionary *locationDic))success failure:(void(^)(NSString *error))failure;


/*! 位置共享
 @param   appId                应用的appId
 @param   uIdGroup             要共享位置的用户id的组合,id用,隔开
 @return  multi_locationArr    共享位置的相关信息，存储为一个数组，数组中包含每个用户id的位置信息
 @return  error                失败的错误信息
 */
-(void)INNSMap_multi_locationSharingWithUserIdGroup:(NSString *)uIdGroup success:(void (^)(NSMutableArray *multi_locationArr))success failure:(void(^)(NSString *error))failure;


@end
