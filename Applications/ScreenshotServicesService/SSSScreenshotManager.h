//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSSScreenshotManager : NSObject
{
    NSMutableArray *_screenshots;	// 8 = 0x8
    NSMutableArray *_environmentDescriptionIdentifiersUIIsInterestedIn;	// 16 = 0x10
    NSMutableArray *_environmentDescriptionIdentifiersGoingAway;	// 24 = 0x18
    NSMutableArray *_environmentDescriptionIdentifiersInActiveDragSession;	// 32 = 0x20
    NSMutableArray *_environmentDescriptionIdentifiersBeingRemoved;	// 40 = 0x28
    NSMutableArray *_environmentDescriptionIdentifiersBeingSaved;	// 48 = 0x30
    NSMutableArray *_imageIdentifierUpdateObservers;	// 56 = 0x38
}

+ (id)sharedScreenshotManager;	// IMP=0x0020000000016594
+ (void)_createTemporarySavingQueue;	// IMP=0x0010000000014b9b
- (void).cxx_destruct;	// IMP=0x0020000000016619
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingSaved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingRemoved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersInActiveDragSession;
- (id)environmentDescriptionIdentifiersGoingAway;	// IMP=0x001000000001655c
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersUIIsInterestedIn;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingTracked;
- (id)description;	// IMP=0x00100000000160a6
- (id)init;	// IMP=0x0010000000015f6e
- (void)_trackingChanged;	// IMP=0x0010000000015f14
- (void)_reevaluateTrackingForScreenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x0010000000015c5e
- (void)performIfNoScreenshotsAreActive:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015c21
- (void)screenshotLeftDragSession:(id)arg1;	// IMP=0x0010000000015b95
- (void)screenshotEnteredDragSession:(id)arg1;	// IMP=0x0010000000015b0c
- (void)userInterfaceStoppedBeingInterestedInScreenshot:(id)arg1;	// IMP=0x0010000000015a80
- (void)userInterfaceWillStopBeingInterestedInScreenshot:(id)arg1;	// IMP=0x0010000000015a04
- (void)userInterfaceBecameInterestedInScreenshot:(id)arg1;	// IMP=0x001000000001597b
- (_Bool)_areAnyScreenshotsActive;	// IMP=0x0010000000015819
- (_Bool)_screenshotIsBeingRemoved:(id)arg1;	// IMP=0x00100000000157a1
- (_Bool)_screenshotIsGoingAway:(id)arg1;	// IMP=0x0010000000015729
- (void)removeTemporaryScreenshotLocation:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000015598
- (void)removeScreenshot:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000015126
- (void)saveScreenshotsToTemporaryLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014beb
- (_Bool)_screenshotIsBeingSaved:(id)arg1;	// IMP=0x0010000000014b23
- (void)saveEditsToScreenshotIfNecessary:(id)arg1 inTransition:(_Bool)arg2;	// IMP=0x0010000000013f7a
- (void)removeImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000013f64
- (void)addImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000013db4
- (void)processEnvironmentElementDocumentUpdate:(id)arg1;	// IMP=0x0010000000013a08
- (_Bool)processEnvironmentElementMetadataUpdate:(id)arg1;	// IMP=0x0010000000013647
- (_Bool)shouldCaptureDocumentForMetadataUpdate:(id)arg1;	// IMP=0x001000000001337a
- (void)processImageIdentifierUpdate:(id)arg1;	// IMP=0x00100000000130b7
- (id)_screenshotWithEnvironmentElementWithIdentifier:(id)arg1;	// IMP=0x0010000000012d6e
- (id)_screenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x0010000000012b6c
- (id)createScreenshotWithEnvironmentDescription:(id)arg1;	// IMP=0x0010000000012aff

@end

