//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LogKey, NSNumber, NSString, NSURL, NSUUID, ProgressPortions;

@interface ApplicationProgress : NSObject
{
    _Bool _createPlaceholder;	// 8 = 0x8
    _Bool _reportRemotely;	// 9 = 0x9
    _Bool _update;	// 10 = 0xa
    NSURL *_artworkURL;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSUUID *_externalID;	// 32 = 0x20
    LogKey *_logKey;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    ProgressPortions *_progressPortions;	// 56 = 0x38
    long long _status;	// 64 = 0x40
    NSNumber *_storeItemID;	// 72 = 0x48
    long long _watchApplicationMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001d80a0

@end
