//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject
{
    NSMutableDictionary *mBuildOrderMap;	// 8 = 0x8
    unsigned int mCurrentGroupId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000437a10
- (unsigned int)generateGroupId;	// IMP=0x0000000000437a01
- (id)buildOrderMap;	// IMP=0x00000000004379f3
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;	// IMP=0x00000000004378c9
- (void)reset;	// IMP=0x00000000004378a1
- (id)init;	// IMP=0x000000000000bd26

@end
