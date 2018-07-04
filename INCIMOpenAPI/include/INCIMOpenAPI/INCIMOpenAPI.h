//
//  INCIMOpenAPI.h
//  INCIMOpenAPI
//
//  Created by 王旭焜 on 2018/7/4.
//  Copyright © 2018年 青岛英凯利信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger, INCOperationType) {
    /*
     统一资源库
     */
    INCOperationTypeQRCodeScannerUnionLibrary,
    /*
     清查库
     */
    INCOperationTypeQRCodeScannerLocationLibrary,
};
@interface INCIMOpenAPI : NSObject
/**
 注册用key
 */
@property (nonatomic, copy) NSString * appKey;

/**
 回调scheme
 */
@property (nonatomic, copy) NSString * callBackScheme;

/**
 debug模式，会输出操作日志与错误信息，DEBUG默认开启，RELEASE默认关闭
 */
@property (nonatomic, assign) BOOL debug;

/**
 获取单例
 
 @return INCIMOpenAPI
 */
+ (instancetype)sharedOpenAPI;

/**
 二维码扫描功能
 
 @param userId 当前登录人员Id
 @param type 欲扫描二维码的类型
 @return 是否调用成功
 */
- (BOOL)QRCODEWithUserId:(NSString *)userId QRCodeType:(INCOperationType)type;
@end
