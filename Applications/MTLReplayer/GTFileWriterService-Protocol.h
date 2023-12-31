//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, NSUUID;

@protocol GTFileWriterService
- (void)abortSession:(unsigned long long)arg1;
- (void)finishSession:(unsigned long long)arg1;
- (void)writeFileChunks:(NSArray *)arg1 withData:(NSData *)arg2 session:(unsigned long long)arg3;
- (void)beginTransferSessionWithFileEntries:(NSArray *)arg1 basePath:(NSString *)arg2 device:(NSUUID *)arg3 config:(CDStruct_32a7f38a)arg4 sessionID:(unsigned long long)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)initiateTransfer:(NSArray *)arg1 basePath:(NSString *)arg2 device:(NSUUID *)arg3 config:(CDStruct_32a7f38a)arg4 completionHandler:(void (^)(NSError *))arg5;
@end

