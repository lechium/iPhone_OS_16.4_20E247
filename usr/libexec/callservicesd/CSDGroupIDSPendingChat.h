//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, TUHandle;

@interface CSDGroupIDSPendingChat : NSObject
{
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *handle;	// 2004049759 = 0x77735f5f
}

- (void).cxx_destruct;	// IMP=0x00400000002f6330
- (MISSING_TYPE *)init;	// IMP=0x00100000002f62c0
- (id)initWithUUID:(id)arg1 handle:(id)arg2;	// IMP=0x00100000002f61f0
@property(nonatomic, readonly) TUHandle *handle; // @synthesize handle;
@property(nonatomic, readonly) NSUUID *uuid;

@end
