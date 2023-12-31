//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString, _ACPluginDB;

__attribute__((visibility("hidden")))
@interface _ACPluginDBDirectory : NSObject
{
    _ACPluginDB *mDB;	// 8 = 0x8
    NSString *mFullPath;	// 16 = 0x10
    double mModificationDate;	// 24 = 0x18
    int mPriority;	// 32 = 0x20
    NSMutableDictionary *mBundlesByName;	// 40 = 0x28
    struct __FSEventStream *mFSMonitor;	// 48 = 0x30
    double mCurrentModificationDate;	// 56 = 0x38
    NSData *mCarbonComponentHash;	// 64 = 0x40
    _Bool mComponentsLoadable;	// 72 = 0x48
    NSMutableArray *mChangedBundlePaths;	// 80 = 0x50
    unsigned long long mNrOfPathsChanged;	// 88 = 0x58
    _Bool mShouldRescan;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d1afa
- (void).cxx_destruct;	// IMP=0x00000000001d1924
- (id)scanBundle:(id)arg1 loadable:(_Bool)arg2;	// IMP=0x00000000001d177f
- (void)scanDirectory;	// IMP=0x00000000001d1388
- (void)loadAllComponents:(void *)arg1;	// IMP=0x00000000001d1232
- (void)monitorDirectory;	// IMP=0x00000000001d1167
- (void)eventStreamCallback:(id)arg1 flags:(const unsigned int *)arg2;	// IMP=0x00000000001d0e82
- (void)bundlesChanged:(id)arg1 shouldRescan:(_Bool)arg2;	// IMP=0x00000000001d04b8
- (_Bool)refreshModificationDate;	// IMP=0x00000000001d048c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d03df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d024a
- (id)initWithPath:(id)arg1 priority:(int)arg2;	// IMP=0x00000000001d0187
- (void)dealloc;	// IMP=0x00000000001d010a

@end

