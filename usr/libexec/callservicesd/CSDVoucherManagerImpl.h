//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDVoucherManagerImpl : NSObject
{
    MISSING_TYPE *completionQueue;	// 8 = 0x8
    MISSING_TYPE *vouchingEnablement;	// 16 = 0x10
    MISSING_TYPE *idsService;	// 24 = 0x18
    MISSING_TYPE *idsPushHandler;	// 32 = 0x20
    MISSING_TYPE *timeout;	// 0 = 0x0
    MISSING_TYPE *verificationCache;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002924b0
- (id)init;	// IMP=0x0010000000292450
- (void)verify:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002923d0
- (void)sign:(id)arg1 as:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000291a30
- (id)initWithIdsService:(id)arg1;	// IMP=0x0010000000290e60

@end

