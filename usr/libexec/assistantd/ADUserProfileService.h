//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, SAUserProfile;
@protocol OS_dispatch_queue;

@interface ADUserProfileService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SAUserProfile *_userProfileCommand;	// 16 = 0x10
    _Bool _isFetchingProfileNames;	// 24 = 0x18
    NSSet *_localUserProfileNames;	// 32 = 0x20
    NSMutableSet *_homeUserProfileNames;	// 40 = 0x28
    NSMutableSet *_namesToDelete;	// 48 = 0x30
    _Bool _needsProfileNameSync;	// 56 = 0x38
}

+ (id)sharedService;	// IMP=0x00000000001c2ced
- (void).cxx_destruct;	// IMP=0x00200000001c2f00
- (id)_init;	// IMP=0x00100000001c2dd9
- (id)init;	// IMP=0x00100000001c2d52

@end
