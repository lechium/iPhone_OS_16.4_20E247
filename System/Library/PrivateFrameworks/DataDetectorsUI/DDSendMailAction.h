//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDSendMailAction : DDAction
{
}

+ (id)matchingScheme;	// IMP=0x0010000000047f66
- (_Bool)canBePerformedByOpeningURL;	// IMP=0x00000000000482f3
- (void)performFromView:(id)arg1;	// IMP=0x00000000000482d3
- (int)interactionType;	// IMP=0x00000000000482cb
- (id)notificationURL;	// IMP=0x00000000000482b3
- (id)notificationIconBundleIdentifier;	// IMP=0x00000000000482a6
- (id)notificationTitle;	// IMP=0x00000000000480ee
- (id)compactTitle;	// IMP=0x0000000000047f98
- (id)iconName;	// IMP=0x0000000000047f8b
- (id)localizedName;	// IMP=0x0000000000047f73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

