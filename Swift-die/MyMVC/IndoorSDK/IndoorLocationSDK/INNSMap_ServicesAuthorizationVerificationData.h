//
//  ServicesAuthorizationVerificationData.h
//  IndoorLocationTest
//
//  Created by lj on 16/3/24.
//  Copyright © 2016年 YLF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "INNSMap_ReturnInfo.h"

@interface INNSMap_ServicesAuthorizationVerificationData : NSObject

/*!
 *  初始化
 *  @return  YES(NO)
 */
- (BOOL)INNSMap_Init;

/*!
 *  注册应用,即对应用进行授权认证
 *  @param  anAppKey       网页注册的key
 *  @return returnInfo     要返回的信息
 *  @return error          失败的错误信息
 */
- (void)INNSMap_RegisterSDKWithAppKey:(NSString *)anAppKey success:(void (^)(INNSMap_ReturnInfo *returnInfo))success failure:(void(^)(NSString *error))failure;

/*!获取SDK版本 */
-(NSString *)getINNSMapSDK_Version;

/*!获取SDK的userID */
-(NSString *)getINNSMapSDK_UserID;


@end
