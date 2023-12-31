//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ACPluginDBBundle : NSObject
{
    NSString *mFullPath;	// 8 = 0x8
    double mInfoPlistModDate;	// 16 = 0x10
    double mRsrcModDate;	// 24 = 0x18
    struct AudioComponentVector mBundleComponentVector;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001cf40d
- (id).cxx_construct;	// IMP=0x00000000001cfdc0
- (void).cxx_destruct;	// IMP=0x00000000001cfd9a
- (void)scanWithPriority:(int)arg1 loadable:(_Bool)arg2 infoPlistPath:(id)arg3;	// IMP=0x00000000001cf66c
- (void)loadAllComponents:(void *)arg1;	// IMP=0x00000000001cf654
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001cf582
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cf455
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;	// IMP=0x00000000001cf415

@end

