//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OITSUNoCopyDictionary, PDRootTimeNode;

__attribute__((visibility("hidden")))
@interface PDAnimation : NSObject
{
    PDRootTimeNode *mRootTimeNode;	// 8 = 0x8
    OITSUNoCopyDictionary *mBuildMap;	// 16 = 0x10
}

+ (id)exitSubTypeMap;	// IMP=0x004000000043e122
+ (id)entranceSubTypeMap;	// IMP=0x004000000043e06e
- (void).cxx_destruct;	// IMP=0x000000000043e230
- (id)description;	// IMP=0x000000000043e1f2
- (void)setBuildMap:(id)arg1;	// IMP=0x00000000001dd81e
- (id)buildMap;	// IMP=0x000000000043e1e4
- (id)addRootTimeNode;	// IMP=0x00000000001d049c
- (id)rootTimeNode;	// IMP=0x000000000043e1d6
- (id)init;	// IMP=0x000000000001d811

@end

