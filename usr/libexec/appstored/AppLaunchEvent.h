//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface AppLaunchEvent : NSObject
{
    _Bool _isExtensionUsage;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    _Bool _clip;	// 10 = 0xa
    NSDate *_endDate;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSString *_launchReason;	// 32 = 0x20
    unsigned long long _sourceStream;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSString *_bundleVersion;	// 56 = 0x38
    NSNumber *_evid;	// 64 = 0x40
    NSNumber *_itemID;	// 72 = 0x48
    NSString *_itemName;	// 80 = 0x50
    NSString *_clipBundleID;	// 88 = 0x58
    NSURL *_clipFullURL;	// 96 = 0x60
    NSString *_clipLaunchReason;	// 104 = 0x68
    NSURL *_clipReferrerURL;	// 112 = 0x70
    NSString *_clipReferrerBundleID;	// 120 = 0x78
    NSString *_clipWebAppBundleID;	// 128 = 0x80
    NSString *_containingBundleID;	// 136 = 0x88
    long long _eventTime;	// 144 = 0x90
    long long _usageTime;	// 152 = 0x98
    long long _usageCount;	// 160 = 0xa0
    NSDate *_lastEventEndDate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000001dd57e
- (id)description;	// IMP=0x00100000001dd1e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001dcfb9

@end

