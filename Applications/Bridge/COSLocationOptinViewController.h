//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface COSLocationOptinViewController
{
}

+ (void)authorizeLocationForWatchFaces;	// IMP=0x002000000000f658
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000000f627
+ (_Bool)locationRestricted;	// IMP=0x001000000000f5b1
+ (_Bool)locationServicesEnabled;	// IMP=0x001000000000f4e3
+ (void)doWorkForSkippedPane;	// IMP=0x001000000000f4b0
+ (_Bool)wantsUnifiedFYI;	// IMP=0x001000000000f49e
- (id)privacyBundles;	// IMP=0x002000000000fa98
- (id)alternateButtonTitle;	// IMP=0x001000000000fa2c
- (id)suggestedButtonTitle;	// IMP=0x001000000000f9c0
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x001000000000f8dc
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000000f8c8
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000000f8aa
- (id)imageResource;	// IMP=0x001000000000f859
- (id)detailString;	// IMP=0x001000000000f7ed
- (id)titleString;	// IMP=0x001000000000f781
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x001000000000f779
- (id)init;	// IMP=0x001000000000f728

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
