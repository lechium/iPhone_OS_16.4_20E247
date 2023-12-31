//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLProgress, NSString;
@protocol CRLModalOperationToken;

@protocol CRLModalOperationPresenter <NSObject>
- (void)continueAsynchronousWorkOnMainThreadUsingBlock:(void (^)(void))arg1;
- (void)endModalOperationWithToken:(id <CRLModalOperationToken>)arg1;
- (id <CRLModalOperationToken>)beginModalOperationWithPresentedLocalizedMessage:(NSString *)arg1 progress:(CRLProgress *)arg2 cancelHandler:(void (^)(void))arg3;
- (id <CRLModalOperationToken>)beginModalOperationWithLocalizedMessage:(NSString *)arg1 progress:(CRLProgress *)arg2 cancelHandler:(void (^)(void))arg3;
@end

