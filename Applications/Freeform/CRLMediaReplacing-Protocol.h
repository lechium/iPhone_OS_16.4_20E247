//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol CRLMediaReplacing <NSObject>
- (void)replaceSelectedMediaWithFilesAtURLs:(NSArray *)arg1 allowedTypes:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)replaceSelectedMediaWithData:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)showMediaReplaceUI:(id)arg1;
@end

