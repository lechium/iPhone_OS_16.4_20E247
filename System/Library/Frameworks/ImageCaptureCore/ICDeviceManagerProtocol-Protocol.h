//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ImageCaptureCore/NSObject-Protocol.h>

@class ICCameraDevice, ICCameraFile, ICDevice, NSArray, NSData, NSDictionary;

@protocol ICDeviceManagerProtocol <NSObject>
- (long long)ejectDevice:(ICCameraDevice *)arg1 completion:(void (^)(id, NSMutableDictionary *))arg2;
- (long long)unregisterDevice:(ICCameraDevice *)arg1 forImageCaptureEventNotifications:(NSArray *)arg2;
- (long long)registerDevice:(ICCameraDevice *)arg1 forImageCaptureEventNotifications:(NSArray *)arg2;
- (long long)sendDevice:(ICCameraDevice *)arg1 ptpCommand:(NSData *)arg2 andPayload:(NSData *)arg3 completion:(void (^)(id, NSMutableDictionary *))arg4;
- (long long)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(id, NSMutableDictionary *))arg4;
- (long long)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 completion:(void (^)(id, NSMutableDictionary *))arg3;
- (long long)syncClock:(ICDevice *)arg1 completion:(void (^)(id, NSMutableDictionary *))arg2;
- (long long)getFileData:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(id, NSMutableDictionary *))arg4;
- (long long)getFileMetadata:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(id, NSMutableDictionary *))arg4;
- (long long)getFileThumbnail:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(id, NSMutableDictionary *))arg4;
- (long long)closeSession:(ICCameraDevice *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(id, NSMutableDictionary *))arg3;
- (long long)openSession:(ICCameraDevice *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(id, NSMutableDictionary *))arg3;
- (long long)closeDevice:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (long long)openDevice:(NSDictionary *)arg1 contextInfo:(void *)arg2;
@end
