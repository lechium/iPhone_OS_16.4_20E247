//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray;

@interface CPLCloudKitOperationCounter : NSObject
{
    NSMutableArray *_sessions;	// 8 = 0x8
    MISSING_TYPE *_currentSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000135f8e
- (id)status;	// IMP=0x0010000000135c5e
- (id)statusObject;	// IMP=0x0010000000135963
- (void)endTask:(id)arg1 withOperationClasses:(id)arg2 operationsAllowingCellular:(id)arg3;	// IMP=0x00100000001357bb
- (void)beginTask:(id)arg1;	// IMP=0x0010000000135561
- (id)init;	// IMP=0x001000000013550b

@end

